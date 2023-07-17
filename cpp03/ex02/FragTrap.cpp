/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:30:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/17 23:43:27 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "fragtrap::[" << "null" <<"] is born" <<  std::endl;
	setName("null");
	setHp(100);
	setEp(100);
	setDp(30);
}

FragTrap::FragTrap(const FragTrap& obj) {
	std::cout << "scavtrap::[" << obj.getName() <<"] is born" <<  std::endl;
	setName(obj._name);
	setHp(obj._hp);
	setEp(obj._ep);
	setDp(obj._dp);
}

FragTrap::~FragTrap() {
	std::cout << "fragtrap destroyer called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_dp = obj._dp;
	return (*this);
}

FragTrap::FragTrap(std::string name) {
	std::cout << "fragtrap::[" << name <<"] is born" <<  std::endl;
	setName(name);
	setHp(100);
	setEp(100);
	setDp(30);
}
void FragTrap::attack(std::string const& target) {
	std::cout << this->getName() << " attacks "  << target
				<< " with " << this->getDp() << "dp" << std::endl;
	std::cout << "!!scavattack!!!" << std::endl;
}
void FragTrap::highFivesGuys(void) {
	std::cout << this->getName() << " high fives" << std::endl;
}
