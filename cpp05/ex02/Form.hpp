/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:18:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/08 19:58:21 by donghyk2         ###   ########.fr       */
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
  virtual ~Form();
  Form& operator=(const Form& obj);

  Form(std::string name, bool sign, int gradeToSign, int gradeToExecute);
  std::string	getName() const;
  bool				getSign() const;
  int			getGradeToSign() const;
  int			getGradeToExecute() const;
  void beSigned(Bureaucrat &obj);
  virtual void execute(Bureaucrat const & executor) const = 0;

};
std::ostream& operator<<(std::ostream& o, Form &obj);
#endif
