/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:08:59 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/17 22:18:33 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string		ClapTrap::getName(void) const {
	return (this->_name);
}
unsigned int 	ClapTrap::getHp(void) const {
	return (this->_hp);
}
unsigned int 	ClapTrap::getEp(void) const {
	return (this->_ep);
}
unsigned int 	ClapTrap::getDp(void) const {
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
	std::cout << "claptrap::[" << "null" <<"] is born" <<  std::endl;
	setName("null");
	setHp(10);
	setEp(10);
	setDp(0);
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
	std::cout << "claptrap::[" << obj._name <<"] is born" <<  std::endl;
	setName(obj._name);
	setHp(obj._hp);
	setEp(obj._ep);
	setDp(obj._dp);
}

ClapTrap::~ClapTrap() {}
ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_dp = obj._dp;
	return (*this);
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "claptrap::[" << name <<"] is born" <<  std::endl;
	setName(name);
	setHp(10);
	setEp(10);
	setDp(0);
}

void ClapTrap::attack(const std::string& target) {
	if (this->getEp() == 0)
		std::cout << this->getName() << " have no ep" << std::endl;
	else
		std::cout << this->getName() << " attacks "  << target
					<< " with " << this->getDp() << "dp" << std::endl;
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
	if (this->_ep == 0) {
		std::cout << this->getName() << "have no ep" << std::endl;
		return ;
	}
	std::cout << _name << " + " << amount << "hp" << std::endl;
	this->_hp += amount;
	this->_ep -= 1;
}
