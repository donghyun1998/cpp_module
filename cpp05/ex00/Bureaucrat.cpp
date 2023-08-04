/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:21:02 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/04 21:42:44 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("null") {
	grade = 150; // TODO: 초기화 150으로 되는거 맞는지
}
Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name) {
	grade = obj.grade;
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	// ??? const name 못 바꾸는디

}
void Bureaucrat::upgrade() {
	try {
		this->grade -= 1;
		if (this->grade < TOP)
			throw (Bureaucrat::GradeTooHighException); // 어케하누
	}
	catch (const std::exception& e) {

	}
}
void Bureaucrat::downgrade() {} // 이게 최선인가 1등급이 높아서 안 헷갈리게 이름 짓고싶은 {}

void Bureaucrat::GradeTooHighException() {}
void Bureaucrat::GradeTooLowException() {}
