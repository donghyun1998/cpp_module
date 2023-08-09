/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:12:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 20:32:50 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char* Intern::InvalidTypeException::what(void) const throw() {
	return ("InvalidTypeException");
}
Intern::Intern() {}
Intern::Intern(const Intern& obj) {
	(void)obj;
}
Intern::~Intern() {}
Intern& Intern::operator=(const Intern& obj) {
	(void)obj;
	return (*this);
}

AForm*	Intern::makeForm(std::string type, std::string target) {
	if (type.size() != 1)
		throw(InvalidTypeException());
	switch (type[0]) {
		case 'P':
			return (new PresidentialPardonForm(target));
		case 'R':
			return (new RobotomyRequestForm(target));
		case 'S':
			return (new ShrubberyCreationForm(target));
		default :
			throw(InvalidTypeException());
	}
}
