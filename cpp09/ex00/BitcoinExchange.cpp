/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 20:20:10 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char* BitcoinExchange::WrongDb::what() const throw() {
	return ("WrongDB");
}
const char* BitcoinExchange::WrongInput::what() const throw() {
	return ("WrongInput");
}
static double changeToDouble(std::string value) {
	return (std::atof(value.c_str()));
}

void	BitcoinExchange::addLineToMap(std::string line, std::fstream& dbFile) {
	std::size_t commaIdx = line.find(",");
	if (commaIdx <= 0 || commaIdx >= line.size() - 1) {
		dbFile.close();
		throw (WrongDb());
	}
	std::string date = line.substr(0, commaIdx);
	double value = changeToDouble(line.substr(commaIdx + 1)); // 이 안에서 체크함
	_db[date] = value;
}

void BitcoinExchange::parseDb(const char* dbFileName) {
	std::fstream dbFile(dbFileName);
	std::string	line;

	std::getline(dbFile, line);
	if (line != "date,exchange_rate") {
		dbFile.close();
		throw (WrongDb());
	}
	while (std::getline(dbFile, line)) {
		if (!dbFile.eof())
			addLineToMap(line, dbFile);
	}
	dbFile.close();
}
static bool checkValue(double value) {
	if (value < 0) {
		std::cout << "not a positive number" << std::endl;
		return (false);
	}
	if (value > 1000) {
		std::cout << "too large a number" << std::endl;
		return (false);
	}
	return (true);
}
void BitcoinExchange::printOutputByLine(std::string line) {
	std::size_t seperatorIdx = line.find('|');
	if (seperatorIdx == std::string::npos || seperatorIdx <= 0
		|| seperatorIdx >= line.size() - 1) {
		std::cout << "bad input -> " << line << std::endl;
		return ;
	}
	std::string date = line.substr(0, seperatorIdx);
	double	value = changeToDouble(line.substr(seperatorIdx + 1));

	if (checkValue(value) == false)
		return ;
	std::map<std::string, double>::iterator it = this->_db.begin();
	while (it->first < date)
		it++;
	it--; // 하위 날짜
	std::cout << date << "-> " << value << " = " << it->second * value << std::endl;
}

void BitcoinExchange::parseInput(char* inputFileName) {
	std::fstream inputFile(inputFileName);
	std::string	line;

	std::getline(inputFile, line);
	if (line != "date | value") {
		inputFile.close();
		throw (WrongInput());
	}
	while (std::getline(inputFile, line)) {
		if (inputFile.eof())
			break ;
		printOutputByLine(line);
	}
	inputFile.close();
}


BitcoinExchange::BitcoinExchange(const char* dbFileName, char* inputFileName) {
	try {
		parseDb(dbFileName);
		parseInput(inputFileName);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
