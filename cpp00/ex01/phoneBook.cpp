/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:53:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/21 18:05:59 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void	PhoneBook::isEof(void)
{
	if (std::cin.eof()) {
		std::cout << "eof" << std::endl;
		exit(1);
	}
}

void PhoneBook::AddInfo(void) {
	std::string	buffer = "";
 // 빈필드가 있으면 안됨//////////////////////////////////
	std::cout << "이름을 입력해주세요" << std::endl;
	std::getline(std::cin, buffer);
	isEof();
	info[lastIdx].SetFirstName(buffer);
	std::cout << "성을 입력해주세요" << std::endl;
	std::getline(std::cin, buffer);
	isEof();
	info[lastIdx].SetLastName(buffer);
	std::cout << "별명을 입력해주세요" << std::endl;
	getline(std::cin, buffer);
	isEof();
	info[lastIdx].SetNickName(buffer);
	std::cout << "핸드폰 번호를 입력해주세요" << std::endl;
	getline(std::cin, buffer);
	isEof();
	info[lastIdx].SetPhoneNumber(buffer);
	std::cout << "비밀을 입력해주세요" << std::endl;
	getline(std::cin, buffer);
	isEof();
	info[lastIdx].SetDarkestSecret(buffer);
	if (this->infoSize < 8)
		this->infoSize++;
	if (++(this->lastIdx) >= 8)
		this->lastIdx %= 8;
}

void PhoneBook::PrintInfo(std::string s) {
	if (s.size() <= 10)
		std::cout << std::setfill(' ') << std::setw(10) << s;
	else
	{
		std::cout << std::setfill(' ') << std::setw(10) << s.substr(0, 9);
		std::cout << '.';
	}
}

void	PhoneBook::PrintLineSearch(int idx)
{
	int	num;

	if (infoSize < 8)
		num = (this->lastIdx - this->infoSize + idx) % 8;
	else
		num = (this->lastIdx + 1 + idx) % 8;

	std::cout << std::setfill(' ') << std::setw(10) << idx;
	std::cout << '|';
	PrintInfo(info[num].GetFirstName());
	std::cout << '|';
	PrintInfo(info[num].GetLastName());
	std::cout << '|';
	PrintInfo(info[num].GetNickName());
	std::cout << std::endl;
}

void	PhoneBook::PrintLineExtraSearch(int idx)
{
	int	num;

	if (infoSize < 8)
		num = (this->lastIdx - this->infoSize + idx) % 8;
	else
		num = (this->lastIdx + 1 + idx) % 8;

	std::cout << "idx: " << idx << std::endl;
	std::cout << "firstName: " << info[num].GetFirstName() << std::endl;
	std::cout << "lastName: " << info[num].GetLastName() << std::endl;
	std::cout << "nickName: " << info[num].GetNickName() << std::endl;
	std::cout << "phoneNumber: " << info[num].GetPhoneNumber() << std::endl;
	std::cout << "darkestSecret: " << info[num].GetDarkestSecret() << std::endl;
}

void PhoneBook::Search(void) {
	int			idx = 0;
	std::string	buffer = "";

	if (this->infoSize == 0) {
		std::cout << "비어있다" << std::endl;
		return ;
	}
	std::cout << std::setfill(' ') << std::setw(10) << "index" << '|';
	std::cout << std::setfill(' ') << std::setw(10) << "firstname" << '|';
	std::cout << std::setfill(' ') << std::setw(10) << "lastname" << '|';
	std::cout << std::setfill(' ') << std::setw(10) << "nickname" << std::endl;
	while (idx < infoSize && idx < 8)
		PrintLineSearch(idx++);
	while (42)
	{
		std::cout << "검색할 0 - 7 사이의 인덱스를 넣어주세요" << std::endl;
		std::getline(std::cin, buffer);
		isEof();
		idx = static_cast<int>(buffer[0] - '0');
		if (!std::isdigit(buffer[0]) || buffer.size() != 1
			|| (this->infoSize != 8 && this->lastIdx <= idx)
			|| (idx < 0 || idx > 7))
			continue ;
		break ;
	}
	PrintLineExtraSearch(idx);
};

