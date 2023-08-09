/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:31:40 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 18:47:51 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	this->setName("null");
	this->setSign(false);
	this->setGradeToSign(72);
	this->setGradeToExecute(45);
	this->_target = "null";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
 : RobotomyRequestForm(obj) {
}
RobotomyRequestForm::~RobotomyRequestForm() {

}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	this->setName(obj.getName());
	this->setSign(obj.getSign());
	this->setGradeToSign(obj.getGradeToSign()); // constcast로 우회해서 setter하는게 맞는지..
	this->setGradeToExecute(obj.getGradeToExecute()); // setter안쓰고 하는 방법이 있나??
	this->_target = obj._target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : RobotomyRequestForm() {
	this->_target = target;
}
void  RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	this->checkExecutable(*this, executor);
	int	luck = rand() % 2;

	std::cout << "위이이이이ㅣㅇ잉ㅇ잉ㅇㅇㅇ잉" << std::endl;
	if (luck) {
		std::cout << "50%확률로 " << this->_target << " 은 로보트가 되었다 인간" << std::endl;
	}
	else {
		std::cout << "50%확률로 " << this->_target << " 은 로보트가 되는데 실패했다 인간" << std::endl;
	}
}
