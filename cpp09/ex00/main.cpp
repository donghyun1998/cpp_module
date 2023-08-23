/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:27:46 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 20:17:37 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
// TODO: txt, csv파일 제거해서 제출

int	main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "Wrong arg" << std::endl;
		return (1);
	}
	BitcoinExchange	bit("data.csv", argv[1]);
	// BitcoinExchange	bit2("data.cs", argv[1]); // 오류
	// BitcoinExchange	bit3("data.csv", argv[0]); // 오류
}
