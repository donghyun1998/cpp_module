/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:57:51 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 20:25:48 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
 private:
 public:
	class InvalidTypeException : public std::exception {
		public:
			const char* what(void) const throw();
	};
  Intern();
  Intern(const Intern& obj);
  ~Intern();
  Intern& operator=(const Intern& obj);
  AForm*	makeForm(std::string type, std::string target);
};

#endif
