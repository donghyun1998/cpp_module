/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:54:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/18 14:57:58 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook phoneBook;

	while (42)
	{
		std::cout << "명령을 입력하세요\n";
		std::cin >> cmd;
		if (cmd == "ADD")
			phoneBook.AddInfo();
		else if (cmd == "SEARCH")
			phoneBook.Search();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "없는 명령입니다.\n유효한 ";
	}
}
