/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:53:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/19 03:25:37 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->lastIdx = 0;
	this->infoSize = 0;
};

void	PhoneBook::Contact::SetContact(std::string s, std::string memberName)
{
	if (memberName == "firstName")
		firstName = s;
	else if (memberName == "lastName")
		lastName = s;
	else if (memberName == "nickName")
		nickName = s;
	else if (memberName == "phoneNumber")
		phoneNumber = s;
	else if (memberName == "darkestSecret")
		darkestSecret = s;
};

void PhoneBook::AddInfo(void)
{ // getline써야 할 것 같은데이거
	std::string	buffer;

	std::cout << "이름을 입력해주세요\n";
	getline(std::cin, buffer);
	info[lastIdx].SetContact(buffer, "firstName");
	std::cout << "성을 입력해주세요\n"; // 하나가 씹힘 왜그런지 알아볼 것
	getline(std::cin, buffer);
	info[lastIdx].SetContact(buffer, "lastName");
	std::cout << "별명을 입력해주세요\n";
	getline(std::cin, buffer);
	info[lastIdx].SetContact(buffer, "nickName");
	std::cout << "핸드폰 번호를 입력해주세요\n"; // 숫자 아닌거 들어왔을때? 처리할까말까
	getline(std::cin, buffer);
	info[lastIdx].SetContact(buffer, "phoneNumber");
	std::cout << "비밀을 입력해주세요\n";
	getline(std::cin, buffer);
	info[lastIdx].SetContact(buffer, "darkestSecret");
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
};

