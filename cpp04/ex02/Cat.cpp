/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:12 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 00:23:25 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "cat::[" << this->type << "] is born" << std::endl;
} // 타입 cat으로 초기화됨
Cat::Cat(const Cat& obj) {
	this->brain = new Brain(*(obj.brain)); // getDeepCopyBrain 필요없음ㅋ
	this->type = obj.type;
	std::cout << "cat::[" << this->type << "] is born" << std::endl;
}
Cat::~Cat() {
	std::cout << "cat::[" << this->type << "] is die" << std::endl;
	delete this->brain;
	// cat이 죽을때 brain 프리하는게 맞겠지??
}
Cat& Cat::operator=(const Cat& obj) {
	this->type = obj.type;
	delete this->brain;
	this->brain = new Brain(*(obj.brain));
	return (*this);
}
void	Cat::makeSound() const{
	std::cout << "[cat] :: miyaong" << std::endl;
} // 고양이는 미야옹
