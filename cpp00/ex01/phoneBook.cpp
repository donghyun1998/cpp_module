/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:53:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/18 14:59:00 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void PhoneBook::AddInfo(void)
{ // getline써야 할 것 같은데이거
	std::cout << "이름을 입력해주세요\n";
	std::cin >> info[lastIdx].firstName;
	std::cout << "성을 입력해주세요\n";
	std::cin >> info[lastIdx].lastName;
	std::cout << "별명을 입력해주세요\n";
	std::cin >> info[lastIdx].nickName;
	std::cout << "핸드폰 번호를 입력해주세요\n"; // 애매한데이거
	std::cin >> info[lastIdx].phoneNumber;
	std::cout << "비밀을 입력해주세요\n";
	std::cin >> info[lastIdx].darkestSecret;
	if (infoSize < 8)
		infoSize++;
	if (++lastIdx >= 8)
		lastIdx %= 8;
}

void PhoneBook::PrintInfo(std::string s)
{
	if (s.size() < 8)
	{
		std::cout << s;
		for (int i = 0; i < 8 - (int)s.size(); i++)
			std::cout << ' ';
	}
	else if (s.size() == 8)
		std::cout << s;
	else
	{
		for (int i = 0; i < 7; i++)
			std::cout << s[i];
		std::cout << '.';
	}
}

void PhoneBook::Search(void)  // 인인덱스 넣는거 추가해야함 그리고 그게 숫자인지도 확인해야함
{
	int idx = 0;
	int num;

	while (idx < infoSize && idx < 8)
	{
		if (infoSize < 8)
			num = (lastIdx - infoSize + idx) % 8;
		else
			num = (lastIdx + 1 + idx) % 8;

		std::cout << idx << "         |";
		PrintInfo(info[num].firstName);
		std::cout << '|';
		PrintInfo(info[num].lastName);
		std::cout << '|';
		PrintInfo(info[num].nickName);
		std::cout << '\n';
		idx++;
	}
}
