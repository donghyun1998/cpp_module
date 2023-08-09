/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:33:48 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/08 19:16:16 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm::GradeTooHighException::what(void) const throw() {
	return ("TooHighException");
}
const char* AForm::GradeTooLowException::what(void) const throw() {
	return ("TooLowException");
}

AForm::AForm() :_name("null"), _gradeToSign(140), _gradeToExecute(150) {
	// 이건 젤 낮은 등급 Aform
	// Aform이 제출 서류? 느낌이라 결재 가능한 등급을 더 높게 해야 하지 않을까
	_sign = false;
}
AForm::AForm(const AForm& obj) :_name(obj._name)
, _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute) {
	_sign = obj._sign;
}
AForm::~AForm() {}
AForm& AForm::operator=(const AForm& obj) {
	const_cast<std::string&>(this->_name) = obj._name;
	const_cast<int&>(this->_gradeToSign) = obj._gradeToSign;
	const_cast<int&>(this->_gradeToExecute) = obj._gradeToExecute;
	this->_sign = obj._sign;
	return (*this);
}
AForm::AForm(std::string name, bool sign, int gradeToSign, int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	this->_sign = sign;
}
std::string	AForm::getName() const {
	return (this->_name);
}
bool				AForm::getSign() const {
	return (this->_sign);
}
int			AForm::getGradeToSign() const {
	return (this->_gradeToSign);
}
int			AForm::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

void 	AForm::setName(std::string name) {
	const_cast<std::string&>(this->_name) = name;
}
void 	AForm::setSign(bool sign) {
	this->_sign = sign;
}
void 	AForm::setGradeToSign(int gradeToSign) {
	if (gradeToSign < TOP)
		throw (GradeTooHighException());
	else if (gradeToSign > BOTTOM)
		throw (GradeTooLowException());
	const_cast<int&>(this->_gradeToSign) = gradeToSign;
}
void 	AForm::setGradeToExecute(int gradeToExecute) {
	if (gradeToExecute < TOP)
		throw (GradeTooHighException());
	else if (gradeToExecute > BOTTOM)
		throw (GradeTooLowException());
	const_cast<int&>(this->_gradeToExecute) = gradeToExecute;
}

void AForm::beSigned(Bureaucrat &obj) {
	if (obj.getGrade() > this->getGradeToSign()) {
		obj.signForm(*this); // 일단 출력하고
		throw (GradeTooLowException());
	}
	this->_sign = true;
	obj.signForm(*this); // 순서 맞춰야함sign먼저 바꿔야함
}

std::ostream& operator<<(std::ostream& o, AForm &obj) {
	o << "<" << obj.getName() << ">, sign <" << obj.getSign()
		<< ">, gradeToSign <" << obj.getGradeToSign() << ">, gradeToExecute <"
		<< obj.getGradeToExecute() << ">";
	return (o);
}
