/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:08:59 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/16 21:07:49 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string		ClapTrap::getName(void) {
	return (this->_name);
}
unsigned int 	ClapTrap::getHp(void) {
	return (this->_hp);
}
unsigned int 	ClapTrap::getEp(void) {
	return (this->_ep);
}
unsigned int 	ClapTrap::getDp(void) {
	return (this->_dp);
}
void			ClapTrap::setName(std::string s) {
	this->_name = s;
}
void		 	ClapTrap::setHp(unsigned int num) {
	this->_hp = num;
}
void		 	ClapTrap::setEp(unsigned int num) {
	this->_ep = num;
}
void		 	ClapTrap::setDp(unsigned int num) {
	this->_dp = num;
}



ClapTrap::ClapTrap() {
	setName("null");
	setHp(0);
	setEp(0);
	setDp(0);
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
	setName(obj._name);
	setHp(obj._hp);
	setEp(obj._ep);
	setDp(obj._dp);
}

ClapTrap::~ClapTrap() {}
ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {}

ClapTrap::ClapTrap(std::string name) {}

void ClapTrap::attack(const std::string& target) {
	std::cout << _name << " attacks "  << target << std::endl;
	// ClapTrap <name> attacks <target>, causing <damage> points of damage!
}

void ClapTrap::takeDamage(unsigned int amount) {
	// 체력 확인 해줘야함
		std::cout << _name << " - " << amount << "hp" << std::endl;
	if (this->_hp >= amount)
		this->_hp -= amount;
	else
		this->_hp = 0; // 일단 0되게 함
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _name << " + " << amount << "hp" << std::endl;
	this->_hp += amount;
}
