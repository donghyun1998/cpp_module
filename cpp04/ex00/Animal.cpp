/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:23:16 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/23 23:37:44 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "null";
}

Animal::Animal(const Animal& obj) {
	this->type = obj.type;
}
Animal::~Animal() {
	// 출력문 추가
}
Animal& Animal::operator=(const Animal& obj) {
	this->type = obj.type;
}
std::string	Animal::getType() const {
	return (this->type);
}
void	Animal::makeSound() const {
	// 뭐 해야하나
}
