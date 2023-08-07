/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:21:02 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/07 14:53:14 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("CustomException");
}
const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("CustomException");
}

Bureaucrat::Bureaucrat() : name("null") {
	this->grade = 150; // TODO: 초기화 150으로 되는거 맞는지
}
Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	const_cast<std::string&>(this->name) = obj.name;
	this->grade = obj.grade;
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	const_cast<std::string&>(this->name) = obj.name;
	this->grade = obj.grade;
}
void Bureaucrat::upGrade() {
	try {
		this->grade -= 1;
		if (this->grade < TOP)
			throw (Bureaucrat::GradeTooHighException); // 어케하누
	}
	catch (const std::exception& e) { // throw 조건문 안에는 throw된 것의 형? 이 오는듯??

	}
}
void Bureaucrat::downGrade() {} // 이게 최선인가 1등급이 높아서 안 헷갈리게 이름 짓고싶은 {}
