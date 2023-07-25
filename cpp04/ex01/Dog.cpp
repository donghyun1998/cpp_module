/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:40 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/24 20:21:32 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "dog::[" << this->type << "] is born" << std::endl;
} // type dog로 초기화됨
Dog::Dog(const Dog& obj) {
	this->type = obj.type;
	std::cout << "dog::[" << this->type << "] is born" << std::endl;
}
Dog::~Dog() {
	std::cout << "dog::[" << this->type << "] is die" << std::endl;
}
Dog& Dog::operator=(const Dog& obj) {
	this->type = obj.type;
	return (*this);
}
void	Dog::makeSound() const{
	std::cout << "[dog] :: walwalwalwal" << std::endl;
}
