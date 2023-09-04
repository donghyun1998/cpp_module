/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/04 15:08:14 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char* BitcoinExchange::WrongDb::what() const throw() {
	return ("WrongDB");
}
const char* BitcoinExchange::WrongInput::what() const throw() {
	return ("WrongInput");
}
BitcoinExchange::~BitcoinExchange() {}
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
	if (checkValidDate(date) == false)
		throw (WrongDb());
	double value = changeToDouble(line.substr(commaIdx + 1)); // 이 안에서 체크함
	_db[date] = value;
}

void BitcoinExchange::parseDb(const char* dbFileName) {
	std::fstream dbFile(dbFileName);
	std::string	line;

	if (dbFile.fail())
		throw (WrongDb());
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
////////////////////////date 검사//////////////////////////
static bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

static bool isValidDate(int year, int month, int day) {
	if (year < 0 || month < 1 || month > 12 || day < 1) {
		return (false);
	}

	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear(year)) {
		daysInMonth[2] = 29;
	}

	return (day <= daysInMonth[month]);
}
// 연도가 4로 나누어지지 않으면 평년(윤년이 아님).
// 연도가 4로 나누어지지만 100으로 나누어지면 평년(윤년이 아님).
// 연도가 100으로 나누어지지만 400으로 나누어지면 윤년.

bool	BitcoinExchange::checkValidDate(std::string date) {
	std::istringstream ss(date);
	int year, month, day;
	char sep = '-';

	if (ss >> year >> sep >> month >> sep >> day && isValidDate(year, month, day))
		return (true);
	return (false);
}
////////////////////////date 검사//////////////////////////

void BitcoinExchange::printOutputByLine(std::string line) {
	std::size_t seperatorIdx = line.find('|');
	if (seperatorIdx == std::string::npos || seperatorIdx <= 0
		|| seperatorIdx >= line.size() - 1) {
		std::cout << "bad input -> " << line << std::endl;
		return ;
	}
	std::string date = line.substr(0, seperatorIdx);
	if (checkValidDate(date) == false) {
		std::cout << "bad date -> " << line << std::endl;
		return ;
	}
	double	value = changeToDouble(line.substr(seperatorIdx + 1));

	if (checkValue(value) == false)
		return ;
	if (this->_db.find(date) == this->_db.end()) {
		std::map<std::string, double>::iterator it = this->_db.begin();
		while (it->first < date)
			it++;
		it--; // 하위 날짜
		std::cout << date << "-> " << value << " = " << it->second * value << std::endl;
	}
	else
		std::cout << date << "-> " << value << " = " << this->_db[date] * value << std::endl;

}

void BitcoinExchange::parseInput(char* inputFileName) {
	std::fstream inputFile(inputFileName);
	std::string	line;

	if (inputFile.fail())
		throw (WrongInput());
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
