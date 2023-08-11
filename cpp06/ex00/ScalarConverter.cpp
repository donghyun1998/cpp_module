/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:25:32 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/11 20:20:46 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static	bool	isNanInff(const std::string& input) {
	if (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf"
		|| input == "+inff" || input == "-inff") {
			return (true);
		}
	return (false);
}


void	ScalarConverter::printChar(const std::string& input) {
	if (isNanInff(input) == true)
		std::cout << "char: impossible" << std::endl;
	
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
