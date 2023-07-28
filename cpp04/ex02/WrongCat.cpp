/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:34:37 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 19:36:34 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->brain = new Brain();
	this->type = "WrongCat";
	std::cout << "Wrongcat::[" << this->type << "] is born" << std::endl;
} // 타입 Wrongcat으로 초기화됨
WrongCat::WrongCat(const WrongCat& obj) {
	this->brain = obj.brain; // 얕다 얕아
	this->type = obj.type;
	std::cout << "Wrongcat::[" << this->type << "] is born" << std::endl;
}
WrongCat::~WrongCat() {
	std::cout << "Wrongcat::[" << this->type << "] is die" << std::endl;
	delete this->brain;
}
WrongCat& WrongCat::operator=(const WrongCat& obj) {
	this->type = obj.type;
	delete this->brain;
	this->brain = new Brain(*(obj.brain));
	return (*this);
}
void	WrongCat::makeSound() const{
	std::cout << "[Wrongcat] :: miyaong" << std::endl;
} // 고양이는 미야옹
