/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:25:32 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/10 19:03:49 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::toChar(const std::string& input) {
	if (input.length() != 1) {
		std::cout << "'*'" << std::endl;
		return ;
	}
	if (!isprint(input[0])) {
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	
}
void	ScalarConverter::toInt(const std::string& input) {}
void	ScalarConverter::toFloat(const std::string& input) {}
void	ScalarConverter::toDouble(const std::string& input) {}


void ScalarConverter::convert(const std::string& input) {
	toChar(input);
	toInt(input);
	toFloat(input);
	toDouble(input);
}
