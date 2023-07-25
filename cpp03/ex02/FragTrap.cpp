/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:30:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/25 15:37:49 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << GREEN << "fragtrap::[" << "null" <<"] is born" << RESET <<  std::endl;
	setName("null");
	setHp(100);
	setEp(100);
	setDp(30);
}

FragTrap::FragTrap(const FragTrap& obj) {
	std::cout << GREEN << "fragtrap::[" << obj.getName() <<"] is born" << RESET << std::endl;
	setName(obj._name);
	setHp(obj._hp);
	setEp(obj._ep);
	setDp(obj._dp);
}

FragTrap::~FragTrap() {
	std::cout << GREEN << "fragtrap::[" << this->getName() << "] is dead"<< RESET  << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_dp = obj._dp;
	return (*this);
}

FragTrap::FragTrap(std::string name) {
	std::cout << GREEN << "fragtrap::[" << name <<"] is born" << RESET <<  std::endl;
	setName(name);
	setHp(100);
	setEp(100);
	setDp(30);
}
 // 어택 clap이랑 똑같이 하래네 서브젝트 죽일놈
void FragTrap::highFivesGuys(void) {
	std::cout << GREEN << "fragtrap::[" << this->getName() << "] high fives"<< RESET  << std::endl;
}
