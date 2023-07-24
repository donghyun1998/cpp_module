/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:32:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/24 20:10:41 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "null";
	std::cout << "Wronganimal::[" << this->type << "] is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	this->type = obj.type;
	std::cout << "Wronganimal::[" << this->type << "] is born" << std::endl;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "Wronganimal::[" << this->type << "] is die" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	this->type = obj.type;
}
std::string	WrongAnimal::getType() const {
	return (this->type);
}
void	WrongAnimal::makeSound() const {
	// 뭐 해야하나
	std::cout << "[Wronganimal] :: ????????" << std::endl;
}
