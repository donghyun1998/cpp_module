/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:53:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/19 21:04:14 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void PhoneBook::AddInfo(void) {
	std::string	buffer = "";

	std::cout << "이름을 입력해주세요\n";
	std::getline(std::cin, buffer);
	// if (std::cin.eof()) {
	// 	std::cout << "eof\n";
	// 	return ; // 에러 처리 어케하지
	// }
	info[lastIdx].SetFirstName(buffer);
	std::cout << "성을 입력해주세요\n";
	std::getline(std::cin, buffer);
	// eof
	info[lastIdx].SetLastName(buffer);
	std::cout << "별명을 입력해주세요\n";
	getline(std::cin, buffer);
	// eof
	info[lastIdx].SetNickName(buffer);
	std::cout << "핸드폰 번호를 입력해주세요\n";
	getline(std::cin, buffer);
	// eof
	info[lastIdx].SetPhoneNumber(buffer);
	std::cout << "비밀을 입력해주세요\n";
	getline(std::cin, buffer);
	// eof
	info[lastIdx].SetDarkestSecret(buffer);
	if (this->infoSize < 8)
		this->infoSize++;
	if (++(this->lastIdx) >= 8)
		this->lastIdx %= 8;
}

void PhoneBook::PrintInfo(std::string s) {
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

void	PhoneBook::PrintLineSearch(int idx)
{
	int	num;

	if (infoSize < 8)
		num = (this->lastIdx - this->infoSize + idx) % 8;
	else
		num = (this->lastIdx + 1 + idx) % 8;

	std::cout << idx << "         |";
	PrintInfo(info[num].GetFirstName());
	std::cout << '|';
	PrintInfo(info[num].GetLastName());
	std::cout << '|';
	PrintInfo(info[num].GetNickName());
	std::cout << '\n';
}

void PhoneBook::Search(void) {// 인인덱스 넣는거 추가해야함 그리고 그게 숫자인지도 확인해야함 오른쪽 정렬도
	int			idx = 0;
	std::string	buffer = "";

	if (this->infoSize == 0) {
		std::cout << "비어있다\n";
		return ;
	}
	while (idx < infoSize && idx < 8)
	{
		PrintLineSearch(idx);
		idx++;
	}
	std::cout << "검색할 인덱스를 넣어주세요\n";
	std::getline(std::cin, buffer);
	// eof
	while (!(std::isdigit(buffer[0]) && buffer.size() == 1)) {
		std::cout << "0 - 7 사이의 숫자를 입력해 주세요\n";
		std::getline(std::cin, buffer);
		// eof
	}
	idx = static_cast<int>(buffer[0] - '0');
	PrintLineSearch(idx);
};

