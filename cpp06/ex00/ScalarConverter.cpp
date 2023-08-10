/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:25:32 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/11 01:12:24 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::printChar(const std::string& input) {
	// TODO: nan, nanf +-inf, +-inff ㅅㅂ
	if (input.length() != 1) {
		std::cout << "'*'" << std::endl;
		return ;
	}
	if (!isprint(input[0])) {
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: " << static_cast<char>(input[0]) << std::endl;
}
void	ScalarConverter::printInt(const std::string& input) {

}
void	ScalarConverter::printFloat(const std::string& input) {}
void	ScalarConverter::printDouble(const std::string& input) {}


void ScalarConverter::convert(const std::string& input) {
	printChar(input);
	printInt(input);
	printFloat(input);
	printDouble(input);
}
