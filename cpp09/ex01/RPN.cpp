/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:34:47 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/25 01:07:40 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

const char* RPN::error::what() const throw() {
	return ("error");
}

static bool isNumeric(const std::string& str) {
	for (int i = 0; i < str.size(); i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

RPN::RPN(std::string input) {
	//  "8 9 * 9 - 9 - 9 - 4 - 1 +" 숫자 그대로 집어넣고 맨 위에 두개로 들어온 연산 수행
	try {
		getUnit
		std::size_t	spaceIdx = input.find(' '); // 이거 startidx 늘러가면서 space찾는 함수 만들자
		std::string baseNumString = input.substr(0, spaceIdx);
		if (isNumeric(baseNumString) == false)
			throw (error());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
