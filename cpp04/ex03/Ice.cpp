/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:11:24 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 19:00:59 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// TODO:ice(소문자로 초기화)
Ice::Ice() {
	this->type = "ice";
}
Ice::Ice(const Ice& obj) {
	this->type = obj.type;
}
Ice::~Ice() {
	// 뭐하라는겨
}
Ice& Ice::operator=(const Ice& obj) {
	this->type = obj.type;
}
AMateria* Ice::clone() const {
	AMateria *res = new Ice();
	return (res);
 }
void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at <" << target.getName() << "> *" << std::endl;
}
