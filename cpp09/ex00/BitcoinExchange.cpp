/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:29:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 16:57:45 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char* BitcoinExchange::WrongDb::what() const throw() {
		return ("WrongDB");
}

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {}

static void	checkDate(std::string input) { // - 2개인지
	std::size_t	startIdx = 0, endIdx = 0;
	std::string year, month, date;
	for (int i = 0; i < 2; i++) {
		endIdx = date.find('-', startIdx);
	}

	// error throw
}

static void	checkValue(std::string value) {
	 // error throw
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
	double value = changeToDouble(line.substr(comma + 1));
}

void BitcoinExchange::parseDb(char* dbFileName) {
	std::fstream db(dbFileName);
	std::string	line;

	std::getline(db, line);
	if (line != "date | value")
		throw (WrongDb());
	while (std::getline(db, line)) {
		if (!db.eof())
			addLineToMap(line);
	}
}
BitcoinExchange::BitcoinExchange(char* dbFileName, char* inputFileName) {
	parseDb(dbFileName);
	std::fstream input(inputFileName);
	std::string	line;
	while (std::getline(input, line)) {
		if (!input.eof())
			;
}
