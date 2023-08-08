/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:18:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/08 16:48:28 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#define TOP 1
#define BOTTOM 150

class Bureaucrat;

class Form {
 private: // 무조건 private
  const std::string	_name;
  bool				_sign;
  const int			_gradeToSign;
  const int			_gradeToExecute;

 public:
   class GradeTooHighException : public std::exception {
   public:
    const char* what(void) const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    const char* what(void) const throw();
  };
  Form();
  Form(const Form& obj);
  ~Form();
  Form& operator=(const Form& obj);

  const std::string	getName() const;
  bool				getSign() const;
  const int			getGradeToSign() const;
  const int			getGradeToExecute() const;
  void beSigned(Bureaucrat &obj);

};
std::ostream& operator<<(std::ostream& o, Form &obj);
#endif
