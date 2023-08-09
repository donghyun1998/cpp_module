/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:40:52 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 19:08:31 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const char* ShrubberyCreationForm::OutfileException::what(void) const throw() {
	return ("OutfileException");
}

ShrubberyCreationForm::ShrubberyCreationForm() {
	this->setName("null");
	this->setSign(false);
	this->setGradeToSign(145);
	this->setGradeToExecute(137);
	this->_target = "null";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {
	this->setName(obj.getName());
	this->setSign(obj.getSign());
	this->setGradeToSign(obj.getGradeToSign());
	this->setGradeToExecute(obj.getGradeToExecute());
	this->_target = obj._target;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {

}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	this->setName(obj.getName());
	this->setSign(obj.getSign());
	this->setGradeToSign(obj.getGradeToSign()); // constcast로 우회해서 setter하는게 맞는지..
	this->setGradeToExecute(obj.getGradeToExecute()); // setter안쓰고 하는 방법이 있나??
	this->_target = obj._target;
	return (*this);
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) {
	this->setName("null");
	this->setSign(false);
	this->setGradeToSign(25);
	this->setGradeToExecute(5);
	this->_target = target;
}

static const char*	changeToCharp(std::string s) {
	const char *res = s.c_str();
	return (res);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	this->checkExecutable(*this, executor);
	std::string	tree =
							" _\n"
							"| |\n"
							"| |_ _ __ ___  ___\n"
							"| __| '__/ _ \\/ _ \\n"
							"| |_| | |  __/  __/\n"
							" \\__|_|  \\___|\\___|\n";
	std::string fileName = this->_target + "_shrubbery";
	std::ofstream	output(changeToCharp(fileName));
	if (output.fail())
		throw (OutfileException());
	output << tree << std::endl;
}
