/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:21:02 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/07 15:52:40 by donghyk2         ###   ########.fr       */
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
Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	const_cast<std::string&>(this->_name) = obj._name;
	this->_grade = obj._grade;
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	const_cast<std::string&>(this->_name) = obj._name;
	this->_grade = obj._grade;
}
Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) {
	try {
		if (grade > BOTTOM)
			throw (Bureaucrat::GradeTooLowException());
		else if (grade < TOP)
			throw (Bureaucrat::GradeTooHighException());
	}
	catch (std::exception &e) {
		
	}
	this->_grade = grade;
}
void Bureaucrat::upGrade() {
	try {
		if (this->_grade == TOP)
			throw (Bureaucrat::GradeTooHighException()); // 왜 ()붙혀야하는거지
		this->_grade -= 1; // throw하면 아래구문 뛰어넘음
	}
	catch (const std::exception& e) { // throw 조건문 안에는 throw된 것의 형? 이 오는듯??
		//dd
	}
}
void Bureaucrat::downGrade() {
	try {
		if (this->_grade == BOTTOM)
			throw (Bureaucrat::GradeTooLowException());
		this->_grade += 1;
	}
	catch (const std::exception& e) {
		// dd
	}
}
