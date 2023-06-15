/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:54:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/15 12:45:24 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

class PhoneBook {
private:
	Contact	info[8]; // new 안됨 할당X
	int		lastIdx; // 추가 하면 넣을 인덱스
	int		infoSize; // 사람 수만큼 빼주고 8로 나누면 시작 인덱스 완성
public:

	PhoneBook()
	{
		this->lastIdx = 0;
		this->infoSize = 0;
	}

	void	AddInfo(void)
	{
		std::cout << "이름을 입력해주세요\n";
		std::cin >> info[lastIdx].first_name;
		std::cout << "성을 입력해주세요\n";
		std::cin >> info[lastIdx].last_name;
		std::cout << "별명을 입력해주세요\n";
		std::cin >> info[lastIdx].nickname;
		std::cout << "핸드폰 번호를 입력해주세요\n";
		std::cin >> info[lastIdx].phone_number;
		std::cout << "비밀을 입력해주세요\n";
		std::cin >> info[lastIdx].darkest_secret;
		if (infoSize < 8)
			infoSize++;
		if (++lastIdx >= 8)
			lastIdx %= 8;
	}

	void	PrintInfo(std::string s)
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

	void	Search(void)
	{
		int	idx = 0;
		int	num;

		while (idx < infoSize && idx < 8)
		{
			if (infoSize < 8)
				num = (lastIdx - infoSize + idx) % 8;
			else
				num = (lastIdx + 1 + idx) % 8;

			std::cout << idx << "         |";
			PrintInfo(info[num].first_name);
			std::cout << '|';
			PrintInfo(info[num].last_name);
			std::cout << '|';
			PrintInfo(info[num].nickname);
			std::cout << '\n';
			idx++;
		}
	}
};


int	main(void)
{
	std::string	cmd;
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
			break ;
		else
			std::cout << "없는 명령입니다.\n유효한 ";
	}
}
