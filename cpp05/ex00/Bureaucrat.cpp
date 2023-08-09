/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:21:02 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 17:19:40 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("TooHighException");
}
const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("TooLowException");
}

Bureaucrat::Bureaucrat() : _name("null") {
	this->_grade = 150; // TODO: 초기화 150으로 되는거 맞는지
}
Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj._name) {
	this->_grade = obj._grade;
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	const_cast<std::string&>(this->_name) = obj._name;
	this->_grade = obj._grade;
	return (*this);
}
Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) {
	if (grade > BOTTOM)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < TOP)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade = grade;
}
void Bureaucrat::upGrade() {
	if (this->_grade == TOP)
		throw (Bureaucrat::GradeTooHighException()); // ()안엔 argument가 들어감
	this->_grade -= 1; // throw하면 아래구문 뛰어넘음
}
void Bureaucrat::downGrade() {
	if (this->_grade == BOTTOM)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade += 1;
}
int Bureaucrat::getGrade() const {
	return (this->_grade);
}
std::string Bureaucrat::getName() const {
	return (this->_name);
}

std::ostream& operator<<(std::ostream& o, Bureaucrat &obj) {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (o);
}
