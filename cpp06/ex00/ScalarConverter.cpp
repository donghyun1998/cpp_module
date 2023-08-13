/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:25:32 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/13 14:28:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
double ScalarConverter::_value;

static	double	changeStringToDouble(const std::string& input) {
	const char* cStr = input.c_str();
    return (std::atof(cStr));
}
char changeDoubleToChar(double value) {
	return (static_cast<char>(value));
}
int changeDoubleToInt(double value) {
	return (static_cast<int>(value));
}
float changeDoubleToFloat(double value) {
	return (static_cast<float>(value));
}
double changeDoubleToDouble(double value) {
	return (static_cast<double>(value));
}
void	ScalarConverter::printChar(const char c) {
	if (std::isnan(_value) || std::isinf(_value))
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(_value))
		std::cout << "char: Non displayable" << std::endl;
	else if (std::isprint(_value))
		std::cout << "char: \'" << c << '\'' << std::endl;
}
void	ScalarConverter::printInt(const int d) {
	if (std::isnan(_value) || std::isinf(_value))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << d << std::endl;
	// TODO: int 에서 inf 어카지
}
// void	ScalarConverter::printFloat(const std::string& input) {}
// void	ScalarConverter::printDouble(const std::string& input) {}

// static	bool	isValidNum(const std::string input) {
// 	int	lastIdx = input.size() - 1;

// 	if (!std::isalnum(input[lastIdx]))
// 		return (false);
// 	for (int i = 1; i < lastIdx; i++)
// 		if (!std::isalnum(input[i]) && input[i] != '.')
// 			return (false);
// 	if (!std::isalnum(input[lastIdx]) && input[lastIdx] != 'f')
// 		return (false);
// 	return (true);
// } // 쓸모가 없누 어차피 유효한 리터럴만 들어온다고 써있음


void ScalarConverter::convert(const std::string& input) {
	_value = changeStringToDouble(input);
	printChar(changeDoubleToChar(_value));
	printInt(changeDoubleToInt(_value));
	// printFloat(input);
	// printDouble(input);
}
