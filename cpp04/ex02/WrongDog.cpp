/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:07:21 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 19:40:56 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() {
	this->brain = new Brain();
	this->type = "WrongDog";
	std::cout << "Wrongdog::[" << this->type << "] is born" << std::endl;
} // type Wrongdog로 초기화됨
WrongDog::WrongDog(const WrongDog& obj) {
	this->brain = obj.brain; // 얕다 얕아
	this->type = obj.type;
	std::cout << "Wrongdog::[" << this->type << "] is born" << std::endl;
}
WrongDog::~WrongDog() {
	std::cout << "Wrongdog::[" << this->type << "] is die" << std::endl;
	delete this->brain;
}
WrongDog& WrongDog::operator=(const WrongDog& obj) {
	this->type = obj.type;
	delete this->brain;
	this->brain = new Brain(*(obj.brain));
	return (*this);
}
void	WrongDog::makeSound() const{
	std::cout << "[Wrongdog] :: walwalwalwal" << std::endl;
}
