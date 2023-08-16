/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:25:32 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/17 00:14:42 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
double ScalarConverter::_value;

static	double	changeStringToDouble(const std::string& input) {
	const char* cStr = input.c_str();

	// if (input.length() == 1)
	// 	return (static_cast<double>(input[0]));
	// 이거때문에 char 하나짜리 에러 생김 애매한 예외처리 귀찮으니까 안할것임 ㅋ
    return (std::atof(cStr));
}
void	ScalarConverter::printChar() {
	if (std::isnan(_value) || std::isinf(_value))
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(_value))
		std::cout << "char: Non displayable" << std::endl;
	else if (std::isprint(_value))
		std::cout << "char: \'" << static_cast<char>(_value) << '\'' << std::endl;
}
void	ScalarConverter::printInt() {
	int	valueInt = static_cast<int>(_value);

	if (std::isnan(_value) || std::isinf(_value)
		|| static_cast<double>(valueInt) != _value) // 오버플로우
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << valueInt << std::endl;
}
void	ScalarConverter::printFloat() {
	float	valueFloat = static_cast<float>(_value);
	int	valueInt = static_cast<int>(_value);

	if (std::isnan(_value))
		std::cout << "float: nanf" << std::endl;
	else if (std::isinf(_value))
		std::cout << "float: inff" << std::endl;
	else if (valueFloat - valueInt == 0.0f) //소수점 있을때
		std::cout << "float: " << valueFloat << ".0f" << std::endl;
	else
		std::cout << "float: " << valueFloat << 'f' << std::endl;
}
void	ScalarConverter::printDouble() {
	int	valueInt = static_cast<int>(_value);

	if (std::isnan(_value))
		std::cout << "double: nan" << std::endl;
	else if (std::isinf(_value))
		std::cout << "double: inf" << std::endl;
	else if (_value - valueInt == 0.0)
		std::cout << "double: " << _value << ".0" << std::endl;
	else
		std::cout << "double: " << _value << std::endl;
}

void ScalarConverter::convert(const std::string& input) {
	_value = changeStringToDouble(input);
	printChar();
	printInt();
	printFloat();
	printDouble();
}
