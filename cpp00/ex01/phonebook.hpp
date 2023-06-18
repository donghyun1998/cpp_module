/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:09:34 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/19 03:13:55 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP // ㄷㅐ문자 제제대대로  확확인

#include <iostream>
#include <string>

class PhoneBook
{
	public:
		class Contact  //  클래스로 해해야야함
		{
			public:
				std::string firstName;
				std::string lastName;
				std::string nickName;
				std::string phoneNumber;
				std::string darkestSecret;

			void	SetContact(std::string s, std::string memberName);
		};
	public:
		Contact info[8]; // new 안됨 할당X
		int lastIdx;	 // 추가 하면 넣을 인덱스
		int infoSize;	 // 사람 수만큼 빼주고 8로 나누면 시작 인덱스 완성
		PhoneBook();
		void AddInfo(void);
		void PrintInfo(std::string s);
		void Search(void);
};

#endif
