/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:27:56 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 16:02:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::setHumanName(std::string name) {
	_humanName = name;
}

std::string	HumanA::getHumanName(void) {
	return (_humanName);
}

std::string	HumanA::getWeaponName(void) {
	return (_weaponName.getType());
}

HumanA::HumanA(std::string name, Weapon &weaponName) : _weaponName(weaponName) {
	setHumanName(name);
}

void	HumanA::attack() {
	std::cout << getHumanName() << " attacks with their " << getWeaponName() << std::endl;
}
