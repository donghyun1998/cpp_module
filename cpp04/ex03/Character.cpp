/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:39:04 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/01 23:30:22 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = "null";
}
Character::Character(const Character& obj) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
		if (obj.inventory[i] != NULL)
			this->inventory[i] = obj.inventory[i]->clone(); // 요러면 깊지요
	}
	this->name = obj.name;
}
Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
}
Character& Character::operator=(const Character& obj) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]) {
			delete this->inventory[i];
			this->inventory[i] = NULL; // 클날뻔
		}
		if (obj.inventory[i] != NULL)
			this->inventory[i] = obj.inventory[i]->clone(); // 요러면 깊지요
	}
	this->name = obj.name;
	return (*this);
}
std::string const & Character::getName() const {
	return (this->name);
}
void Character::equip(AMateria* m) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == NULL) {
			std::cout << this->name << " equip " << m->getType() << std::endl;
			this->inventory[i] = m; // 이렇게 해야 되네 끼는거니까
			break ;
		}
	}
}
void Character::unequip(int idx) {
	if (this->inventory[idx] != NULL) {
		std::cout << this->name << " unequip " << this->inventory[idx]->getType() << std::endl;
		this->inventory[idx] = NULL;
	}
	// delete하면 안됨 어쩌라는거지
}
void Character::use(int idx, ICharacter& target) {
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
Character::Character(std::string obj) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = obj;
}
