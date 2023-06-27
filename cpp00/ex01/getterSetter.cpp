/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getterSetter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:17:38 by donghyk2          #+#    #+#             */
/*   Updated: 2023/06/27 14:27:05 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->lastIdx = 0;
	this->infoSize = 0;
}

PhoneBook::~PhoneBook(void){
	;
}

PhoneBook::Contact::Contact(void) {
	;
}

PhoneBook::Contact::~Contact(void) {
	;
}

std::string	PhoneBook::Contact::GetFirstName(void) {
	return (this->firstName);
}

std::string	PhoneBook::Contact::GetLastName(void) {
	return (this->lastName);
}

std::string	PhoneBook::Contact::GetNickName(void) {
	return (this->nickName);
}

std::string	PhoneBook::Contact::GetPhoneNumber(void) {
	return (this->phoneNumber);
}

std::string	PhoneBook::Contact::GetDarkestSecret(void) {
	return (this->darkestSecret);
}

void	PhoneBook::Contact::SetFirstName(std::string s) {
	this->firstName = s;
}

void	PhoneBook::Contact::SetLastName(std::string s) {
	this->lastName = s;
}

void	PhoneBook::Contact::SetNickName(std::string s) {
	this->nickName = s;
}

void	PhoneBook::Contact::SetPhoneNumber(std::string s) {
	this->phoneNumber = s;
}

void	PhoneBook::Contact::SetDarkestSecret(std::string s) {
	this->darkestSecret = s;
}
