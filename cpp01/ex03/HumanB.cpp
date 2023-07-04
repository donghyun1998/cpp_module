/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:15:16 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 14:28:23 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setHumanName(std::string name) {
	_humanName = name;
}

void	HumanB::setWeapon(Weapon &name) {
	_weaponName = &name;
}

std::string	HumanB::getHumanName(void) {
	return (_humanName);
}

std::string	HumanB::getWeaponName(void) {
	if (_weaponName)
		return (_weaponName->getType());
	else
		return ("fist");
}

HumanB::HumanB(std::string name) {
	setHumanName(name);
	_weaponName = NULL;
}

void	HumanB::attack() {
	std::cout << getHumanName() << " attacks with their " << getWeaponName() << std::endl;
}
