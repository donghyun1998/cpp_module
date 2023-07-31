/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:35:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 20:51:11 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->skills[0] = NULL;
	this->skills[1] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& obj) {
	for (int i = 0; i < 2; i++) {
		if (this->skills[i])
			this->skills[i] = NULL;
		if (obj.skills[i] != NULL)
			this->skills[i] = obj.skills[i]->clone();
	}
}
MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	for (int i = 0; i < 2; i++) {
		if (this->skills[i]) {
			delete this->skills[i];
			this->skills[i] = NULL;
		}
		if (obj.skills[i] != NULL)
			this->skills[i] = obj.skills[i]->clone();
	}
}

MateriaSource::~MateriaSource() {
	// dd
}
void MateriaSource::learnMateria(AMateria* ) { // 이거 왜 오브젝트 네임이 없지
	// ice 0번 cure 1번에 등록하자

}
AMateria* MateriaSource::createMateria(std::string const & type) {}
