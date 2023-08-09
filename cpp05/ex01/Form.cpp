/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:33:48 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 17:23:37 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw() {
	return ("TooHighException");
}
const char* Form::GradeTooLowException::what(void) const throw() {
	return ("TooLowException");
}

Form::Form() :_name("null"), _gradeToSign(140), _gradeToExecute(150) { // 이건 젤 낮은 등급 form
	// form이 제출 서류? 느낌이라 결재 가능한 등급을 더 높게 해야 하지 않을까
	_sign = false;
}
Form::Form(const Form& obj) :_name(obj._name)
, _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute) {
	_sign = obj._sign;
}
Form::~Form() {}
Form& Form::operator=(const Form& obj) {
	const_cast<std::string&>(this->_name) = obj._name;
	const_cast<int&>(this->_gradeToSign) = obj._gradeToSign;
	const_cast<int&>(this->_gradeToExecute) = obj._gradeToExecute;
	this->_sign = obj._sign;
	return (*this);
}
Form::Form(std::string name, bool sign, int gradeToSign, int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	this->_sign = sign;
}
std::string	Form::getName() const {
	return (this->_name);
}
bool				Form::getSign() const {
	return (this->_sign);
}
int			Form::getGradeToSign() const {
	return (this->_gradeToSign);
}
int			Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat &obj) {
	if (obj.getGrade() > this->getGradeToSign()) {
		obj.signForm(*this); // 일단 출력하고
		throw (GradeTooLowException());
	}
	this->_sign = true;
	obj.signForm(*this); // 순서 맞춰야함sign먼저 바꿔야함
}

std::ostream& operator<<(std::ostream& o, Form &obj) {
	o << obj.getName() << ", sign " << obj.getSign()
		<< ", gradeToSign " << obj.getGradeToSign() << ", gradeToExecute "
		<< obj.getGradeToExecute();
	return (o);
}
