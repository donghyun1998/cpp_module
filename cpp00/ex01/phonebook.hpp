/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:09:34 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/19 21:12:22 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
// #include <sstream> isstringstream 사용 시 필요

class PhoneBook
{
	private:
		class Contact
		{
			private:
				std::string firstName;
				std::string lastName;
				std::string nickName;
				std::string phoneNumber;
				std::string darkestSecret;
			public:
				Contact(void);
				~Contact(void);
				std::string	GetFirstName(void);
				std::string	GetLastName(void);
				std::string	GetNickName(void);
				std::string	GetPhoneNumber(void);
				std::string	GetDarkestSecret(void);
				void		SetFirstName(std::string s);
				void		SetLastName(std::string s);
				void		SetNickName(std::string s);
				void		SetPhoneNumber(std::string s);
				void		SetDarkestSecret(std::string s);
		};
	private:
		Contact info[8];
		int lastIdx;	 // 추가 하면 넣을 인덱스
		int infoSize;	 // 사람 수만큼 빼주고 8로 나누면 시작 인덱스 완성
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	PrintLineSearch(int idx);
		void	AddInfo(void);
		void	PrintInfo(std::string s);
		void	Search(void);
};

#endif
