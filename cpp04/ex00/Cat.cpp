/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:12 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/24 16:52:01 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
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
}
void	Cat::makeSound() const{
	std::cout << "[cat] :: miyaong" << std::endl;
} // 고양이는 미야옹
