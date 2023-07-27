/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:21:43 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 00:12:47 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain is born" << std::endl;
}
Brain::Brain(const Brain& obj) {
	std::cout << "Brain is born" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}
Brain::~Brain() {
	std::cout << "Brain is dead" << std::endl;
}
Brain& Brain::operator=(const Brain& obj) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}
