/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:27:46 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 00:45:11 by donghyk2         ###   ########.fr       */
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


void	parseDb(BitcoinExchange &bit) {
	std::fstream db("data.csv");
	std::string	line;
	std::getline(db, line);
	if (line != "date | value")
		throw (WrongDb());
	while (std::getline(db, line)) {
		if (!db.eof())
			;
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
