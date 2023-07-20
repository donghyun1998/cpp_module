/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:30:15 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/20 17:08:03 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
// TODO: 투두 신기하다
ScavTrap::ScavTrap() {
	std::cout << "scavtrap::[" << "null" <<"] is born" <<  std::endl;
	setName("null");
	setHp(100);
	setEp(50);
	setDp(20);
}

ScavTrap::ScavTrap(const ScavTrap& obj) {
	std::cout << "scavtrap::[" << obj.getName() <<"] is born" <<  std::endl;
	setName(obj._name);
	setHp(obj._hp);
	setEp(obj._ep);
	setDp(obj._dp);
}

ScavTrap::~ScavTrap() {
	std::cout << "scavtrap::[" << this->getName() << "] is dead" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_dp = obj._dp;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "scavtrap::[" << name <<"] is born" <<  std::endl;
	setName(name);
	setHp(100);
	setEp(50);
	setDp(20);
}

void ScavTrap::guardGate(void) {
	std::cout << this->getName() << " activate gatekeeper mode" << std::endl;
	// 이게 단가...?
}
void ScavTrap::attack(std::string const& target) {
	if (this->getEp() == 0)
		std::cout << "scavtrap::" << this->getName() << " have no ep" << std::endl;
	else
		std::cout << "scavtrap::" << this->getName() << " attacks "  << target
					<< " with " << this->getDp() << "dp" << std::endl;
}
