/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:09:18 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/01 22:57:51 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	this->type = "null";
}
AMateria::AMateria(const AMateria& obj) {
	this->type = obj.type;
}
AMateria::~AMateria() {}
AMateria& AMateria::operator=(const AMateria& obj) {
	this->type = obj.type;
	return (*this);
}
AMateria::AMateria(std::string const & type) {
	this->type = type;
}
std::string const & AMateria::getType() const {
	return (this->type);
}
void AMateria::use(ICharacter& target) {
	std::cout << "Can't do anything to " << target.getName() << std::endl;
}
