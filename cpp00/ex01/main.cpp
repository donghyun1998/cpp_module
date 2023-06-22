/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:54:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/22 15:57:30 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd = "";
	PhoneBook phoneBook;

	while (!std::cin.eof())
	{
		std::cout << "명령을 입력하세요\n";
		std::getline(std::cin, cmd);
		phoneBook.exitEof();
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
