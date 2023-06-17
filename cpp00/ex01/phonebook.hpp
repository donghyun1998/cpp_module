/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:32:38 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/17 19:38:31 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP // ㄷㅐ문자 제제대대로  확확인

#include <iostream>

class PhoneBook
{
public:
	struct Contact  //  클래스로 해해야야함
	{
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	};

private:
	Contact info[8]; // new 안됨 할당X
	int lastIdx;	 // 추가 하면 넣을 인덱스
	int infoSize;	 // 사람 수만큼 빼주고 8로 나누면 시작 인덱스 완성
public:
	PhoneBook()
	{
		this->lastIdx = 0;
		this->infoSize = 0;
	}

	void AddInfo(void)  // 여여긴 프로토타입만 적고 함수 따로 빼기
	{
		std::cout << "이름을 입력해주세요\n";
		std::cin >> info[lastIdx].firstName;
		std::cout << "성을 입력해주세요\n";
		std::cin >> info[lastIdx].lastName;
		std::cout << "별명을 입력해주세요\n";
		std::cin >> info[lastIdx].nickName;
		std::cout << "핸드폰 번호를 입력해주세요\n";
		std::cin >> info[lastIdx].phoneNumber;
		std::cout << "비밀을 입력해주세요\n";
		std::cin >> info[lastIdx].darkestSecret;
		if (infoSize < 8)
			infoSize++;
		if (++lastIdx >= 8)
			lastIdx %= 8;
	}

	void PrintInfo(std::string s)
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

	void Search(void)  // 인인덱스 넣는거 확확인
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
};

#endif
