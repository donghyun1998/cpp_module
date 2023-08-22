/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:27:46 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/22 21:07:46 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
// TODO: csv파일 제거해서 제출

int	main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "Wrong arg" << std::endl;
		return (1);
	}
	std::fstream db("data.csv");
	std::fstream input(argv[1]);
	std::string	line;
	while (std::getline(input, line)) {
		if (!input.eof())
			;
	}
}
