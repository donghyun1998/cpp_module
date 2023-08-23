/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:27:46 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 16:24:59 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
// TODO: txt, csv파일 제거해서 제출

class WrongDb : public std::exception {
	virtual const char* what() const throw() {
		return ("WrongDB");
	}
};

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

double changeToDouble(std::string value) {
	checkValue(value);
	return (std::atof(value.c_str()));
}

void	addLineToMap(BitcoinExchange &bit, std::string line) {
	std::size_t comma = line.find(",");
	if (comma <= 0 || comma >= line.size() - 1)
		throw (WrongDb());
	std::string date = line.substr(0, comma);
	checkDate(date);
	double value = changeToDouble(line.substr(comma + 1));
}


void	parseDb(BitcoinExchange &bit) {
	std::fstream db("data.csv");
	std::string	line;
	std::getline(db, line);
	if (line != "date | value")
		throw (WrongDb());
	while (std::getline(db, line)) {
		if (!db.eof())
			addLineToMap(bit, line);
	}
}


int	main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "Wrong arg" << std::endl;
		return (1);
	}
	try {
		BitcoinExchange	bit;
		parseDb(bit);
		std::fstream input(argv[1]);
		std::string	line;
		while (std::getline(input, line)) {
			if (!input.eof())
				;
		}

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
