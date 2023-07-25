/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:23:16 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/24 20:21:12 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "null";
	std::cout << "animal::[" << this->type << "] is born" << std::endl;
}

Animal::Animal(const Animal& obj) {
	this->type = obj.type;
	std::cout << "animal::[" << this->type << "] is born" << std::endl;
}
Animal::~Animal() {
	std::cout << "animal::[" << this->type << "] is die" << std::endl;
}
Animal& Animal::operator=(const Animal& obj) {
	this->type = obj.type;
	return (*this);
}
std::string	Animal::getType() const {
	return (this->type);
}
void	Animal::makeSound() const {
	// 뭐 해야하나
	std::cout << "[animal] :: ????????" << std::endl;
}
