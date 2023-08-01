/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:35:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/01 23:14:43 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->skills[i] = NULL;

}
MateriaSource::MateriaSource(const MateriaSource& obj) {
	for (int i = 0; i < 4; i++) {
		this->skills[i] = NULL;
		if (obj.skills[i] != NULL)
			this->skills[i] = obj.skills[i]->clone();
	}
}
MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->skills[i])
			delete this->skills[i]; // 여기서 해줘도 되나???
	}
	std::cout << "ms is dead" << std::endl;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	for (int i = 0; i < 4; i++) {
		if (this->skills[i]) {
			delete this->skills[i];
			this->skills[i] = NULL;
		}
		if (obj.skills[i] != NULL)
			this->skills[i] = obj.skills[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* obj) { // 이거 왜 오브젝트 네임이 없지
	for (int i = 0; i < 4; i++) {
		if (this->skills[i]) {
			skills[i] = obj->clone();
			break ;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
		if (this->skills[i] && this->skills[i]->getType() == type)
			return (this->skills[i]->clone());
	return (NULL);
}
