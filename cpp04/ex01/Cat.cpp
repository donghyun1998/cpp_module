/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:12 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/26 20:17:25 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	// Brain	*newBrain = new Brain();
	this->brain = new Brain(); // brain복사하는 함함수  만만들들자자
	// idea도 복사해주고싶음
	this->type = "Cat";
	std::cout << "cat::[" << this->type << "] is born" << std::endl;
} // 타입 cat으로 초기화됨
Cat::Cat(const Cat& obj) {
	this->type = obj.type;
	std::cout << "cat::[" << this->type << "] is born" << std::endl;
}
Cat::~Cat() {
	std::cout << "cat::[" << this->type << "] is die" << std::endl;
}
Cat& Cat::operator=(const Cat& obj) {
	this->type = obj.type;
	return (*this);
}
void	Cat::makeSound() const{
	std::cout << "[cat] :: miyaong" << std::endl;
} // 고양이는 미야옹
