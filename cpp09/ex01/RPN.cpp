/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:34:47 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/29 21:09:27 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

const char* RPN::Error::what() const throw() {
	return ("Error");
}

const char* RPN::DevideByZero::what() const throw() {
	return ("devide by zero");
}

RPN::~RPN() {}

static bool isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

void RPN::checkInput(std::string input) {
	int numCnt = 0, operCnt = 0;
	// "8 9 * 9"
	if (!std::isdigit(input[0]) || input[1] != ' ' || input.size() % 2 == 0)
		throw (Error());
	for (std::size_t i = 1; i + 1 < input.size(); i += 2) {
		if (input[i] != ' ')
			throw (Error());
		if (std::isdigit(input[i + 1]))
			numCnt++;
		else if (isOperator(input[i + 1]))
			operCnt++;
		else
			throw (Error());
	}
	if (numCnt != operCnt)
		throw (Error());
}

void  RPN::calculate(char oper) {
	if (_s.size() < 2)
		throw (Error());
	double b = _s.top();
	if (oper == '/' && b == 0)
		throw (DevideByZero());
	_s.pop();
	double	a = _s.top();
	_s.pop();
	switch (oper) {
		case '+':
			_s.push(a + b);
			break ;
		case '-':
			_s.push(a - b);
			break ;
		case '*':
			_s.push(a * b);
			break ;
		case '/':
			_s.push(a / b);
			break ;
	}
}

void	RPN::handleUnit(char input) {
	if (std::isdigit(input))
		_s.push(static_cast<double>(input - '0'));
	else
		calculate(input);
}

RPN::RPN(std::string input) {
	//  "8 9 * 9 - 9 - 9 - 4 - 1 +" 숫자 그대로 집어넣고 맨 위에 두개로 들어온 연산 수행
	try {
		checkInput(input);
		for (std::size_t i = 0; i < input.size(); i += 2)
			handleUnit(input[i]);
		std::cout << _s.top() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
