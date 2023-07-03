/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:59:03 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/03 20:30:51 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::getName(void) {
	return (_name);
}

void	Zombie::setName(std::string str) {
	_name = str;
}

void	Zombie::announce(void) {
	std::cout << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void) {
	Zombie::setName("default");
	std::cout << Zombie::getName() << " is born" << std::endl;
}

Zombie::Zombie(std::string str) {
	Zombie::setName(str);
	std::cout << Zombie::getName() << " is born" << std::endl;
}

Zombie::~Zombie() {
	std::cout << Zombie::getName() << " is dead" << std::endl;
}
