/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:34:47 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/25 16:53:32 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

const char* RPN::error::what() const throw() {
	return ("error");
}

static bool isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

void RPN::checkInput(std::string input) {
	int numCnt = 0, operCnt = 0;
	// "8 9 * 9"
	if (!std::isdigit(input[0]) || input[1] != ' ' || input.size() % 2 == 0)
		throw (error());
	for (std::size_t i = 1; i + 1 < input.size(); i += 2) {
		if (input[i] != ' ')
			throw (error());
		if (std::isdigit(input[i + 1]))
			numCnt++;
		else if (isOperator(input[i + 1]))
			operCnt++;
		else
			throw (error());
	}
	if (numCnt != operCnt)
		throw (error());
}

void  RPN::plus() {
	int b = _s.top();
	_s.pop();
	int	a = _s.top();
	_s.pop();
	_s.push(a + b);
}
void  RPN::minus() {
	int b = _s.top();
	_s.pop();
	int	a = _s.top();
	_s.pop();
	_s.push(a - b);
}
void  RPN::multiply() {
	int b = _s.top();
	_s.pop();
	int	a = _s.top();
	_s.pop();
	_s.push(a * b);
}
void  RPN::devide() {
	int b = _s.top();
	_s.pop();
	int	a = _s.top();
	_s.pop();
	_s.push(a / b);
}

void	RPN::calculate(std::string input, int i) {
	switch (input[i]) {
		case '+' :
			plus();
			break ;
		case '-' :
			minus();
			break ;
		case '*' :
			multiply();
			break ;
		case '/' :
			devide();
			break ;
		default : // 숫자 들어온겨
			_s.push(input[i] - '0');
			break ;
	}
}

RPN::RPN(std::string input) {
	//  "8 9 * 9 - 9 - 9 - 4 - 1 +" 숫자 그대로 집어넣고 맨 위에 두개로 들어온 연산 수행
	try {
		checkInput(input);
		for (std::size_t i = 0; i < input.size(); i += 2)
			calculate(input, i);
		std::cout << _s.top() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
