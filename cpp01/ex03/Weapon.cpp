/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:11:33 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 16:01:50 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
	setType(name);
}

void	Weapon::setType(std::string name) {
	_name = name;
}

std::string	Weapon::getType(void) {
	return (_name);
}
