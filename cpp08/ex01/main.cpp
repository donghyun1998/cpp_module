/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:42:48 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/21 18:25:53 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try {
		Span sp = Span(10); // 10으로 바꿔줌
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		// 추가 ㅇㅖ외
		std::vector<int>	v;
		for (int i = 0; i < 3; i++)
			v.push_back(i);
		sp.addNumberOfRange<std::vector<int> >(v.begin(), v.end());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
return 0;
}
