/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:03:30 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/01 23:11:52 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	this->type = "cure";
}
Cure::Cure(const Cure& obj) {
	this->type = obj.type;
}
Cure::~Cure() {
	// 뭔가 하겠지
}
Cure& Cure::operator=(const Cure& obj) {
	this->type = obj.type;
	return (*this);
}
AMateria* Cure::clone() const {
	AMateria *res = new Cure();
	return (res);
}
void Cure::use(ICharacter& target) {
	std::cout << "* heals <" << target.getName() << ">’s wounds *" << std::endl;
}
