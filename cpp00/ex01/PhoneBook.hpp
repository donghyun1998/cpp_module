/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:17:16 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/27 14:49:16 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#define OK 0
#define KO 1

#include <iostream>
#include <string>
#include <iomanip>
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
		Contact info[8];
		int lastIdx;	 // 추가 하면 넣을 인덱스
		int infoSize;	 // 사람 수만큼 빼주고 8로 나누면 시작 인덱스 완성
		void	PrintLineSearch(int idx);
		void	PrintLineExtraSearch(int idx);
		void	PrintInfo(std::string s);
		bool	isEmptyBuffer(std::string buffer);
		void	setBuffer(std::string &buffer);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	exitEof(void);
		void	AddInfo(void);
		void	Search(void);
};

#endif
