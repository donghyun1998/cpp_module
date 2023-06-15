/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:54:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/15 12:31:05 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct t_info
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

class PhoneBook {
private:
	t_info	info[8]; // new 안됨 할당X
	int		lastIdx; // 추가 하면 넣을 인덱스
	int		infoSize; // 사람 수만큼 빼주고 8로 나누면 시작 인덱스 완성
	// 첫번째 인덱스는 |lastIdx - infoSize|
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
		std::cout << "infosize: " << infoSize << " lastidx: " << lastIdx << '\n'; ////////
	}

	void	PrintInfo(std::string s)
	{
		if (s.size() < 8)
		{
			// 출력하고 남은만큼 스페이스바
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
				num = (lastIdx + 1 + idx) % 8; // 이거 아님 임시로 해둠

			std::cout << idx << "         |";
			PrintInfo(info[num].first_name);
			std::cout << '|';
			PrintInfo(info[num].last_name);
			std::cout << '|';
			PrintInfo(info[num].nickname); // seg뜸
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
		{
			// 프로그램은 한 번에 한 필드씩, 모든 필드가 채워질 때까지 사용자에게 새 연락처의 정보를 적을 수 있도록 안내하여야 합니다.
			// 전화번호부 (PhoneBook) 는 코드 내에서 클래스의 인스턴스로 정의되어야 하며, 연락처 배열을 포함하여야 합니다.
			// 연락처는 반드시 코드 내부에서 클래스의 인스턴스로 정의되어야 합니다.
			phoneBook.AddInfo();
		}
		else if (cmd == "SEARCH")
		{
			// 프로그램은 존재하는 (비어있지 않은) 모든 연락처 리스트를 다음과 같은 4개의 열로 나누어 보여주어야 합니다 : 인덱스, 성, 이름, 별명
			// 각 열은 너비 10 문자로, 가로 정렬되어 있어야 하며 '|' 문자로 구분되어야 합니다. 열의 너비보다 긴 출력 문자열은 잘리고 마지막 표시 가능 문자는 점 ('.') 으로 치환됩니다.
			// 그리고 프로그램은 원하는 연락처 항목의 인덱스를 입력받아, 연락처를 한 필드당 한 줄씩 출력하여야 합니다. 의미없는 입력값에 대해선 적절한 동작을 정의하세요.
			phoneBook.Search();
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "없는 명령입니다.\n유효한 ";
	}
}
