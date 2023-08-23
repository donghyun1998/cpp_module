/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 17:14:36 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char* BitcoinExchange::WrongDb::what() const throw() {
		return ("WrongDB");
}

// BitcoinExchange::BitcoinExchange() {}
// BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {}
// BitcoinExchange::~BitcoinExchange() {}
// BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {}

static void	checkDate(std::string input) { // - 2개인지
	std::size_t	startIdx = 0, endIdx = 0;
	std::string year, month, date;
	for (int i = 0; i < 2; i++) {
		endIdx = input.find('-', startIdx);
	}

	// error throw
}

static void	checkValue(std::string value) {
	 // error throw
	 (void)value;
}

static double changeToDouble(std::string value) {
	checkValue(value);
	return (std::atof(value.c_str()));
}

void	BitcoinExchange::addLineToMap(std::string line) {
	std::size_t comma = line.find(",");
	if (comma <= 0 || comma >= line.size() - 1)
		throw (WrongDb());
	std::string date = line.substr(0, comma);
	checkDate(date);
	double value = changeToDouble(line.substr(comma + 1)); // 이 안에서 체크함

	_db[date] = value;
}

void BitcoinExchange::parseDb(const char* dbFileName) {
	std::fstream dbFile(dbFileName);
	std::string	line;

	std::getline(dbFile, line);
	std::cout << "gdgdg" << std::endl;
	if (line != "date,exchange_rate")
		throw (WrongDb());

	while (std::getline(dbFile, line)) {
		if (!dbFile.eof())
			addLineToMap(line);
	}
}
BitcoinExchange::BitcoinExchange(const char* dbFileName, char* inputFileName) {
	try {
		parseDb(dbFileName);
		// std::fstream input(inputFileName);
		// std::string	line;
		// while (std::getline(input, line)) {
		// 	if (!input.eof())
		// 		;
		(void)inputFileName;
		//test
		std::map<std::string, double>::iterator it = _db.begin();
		while (it != _db.end()) {
			std::cout << it->first << " | " << it->second << std::endl;
			it++;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
