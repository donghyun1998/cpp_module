/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:25:59 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 18:47:45 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	this->setName("null");
	this->setSign(false);
	this->setGradeToSign(25);
	this->setGradeToExecute(5);
	this->_target = "null";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
 : PresidentialPardonForm(obj) {
 }
PresidentialPardonForm::~PresidentialPardonForm() {

}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	this->setName(obj.getName());
	this->setSign(obj.getSign());
	this->setGradeToSign(obj.getGradeToSign()); // constcast로 우회해서 setter하는게 맞는지..
	this->setGradeToExecute(obj.getGradeToExecute()); // setter안쓰고 하는 방법이 있나??
	this->_target = obj._target;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : PresidentialPardonForm() {
	this->_target = target;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	this->checkExecutable(*this, executor);
	std::cout << this->_target << "이 자포드 비블브록스님에 의해 사면되었다." << std::endl;
}

