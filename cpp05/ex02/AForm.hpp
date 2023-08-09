/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:18:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/08 22:59:38 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#define TOP 1
#define BOTTOM 150

class Bureaucrat;

class AForm {
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

  AForm();
  AForm(const AForm& obj);
  virtual ~AForm();
  AForm& operator=(const AForm& obj);

  AForm(std::string name, bool sign, int gradeToSign, int gradeToExecute);
  std::string	getName() const;
  bool			getSign() const;
  int			getGradeToSign() const;
  int			getGradeToExecute() const;
  void 			setName(std::string name);
  void 			setSign(bool sign);
  void 			setGradeToSign(int gradeToSign);
  void 			setGradeToExecute(int gradeToExecute);
  void beSigned(Bureaucrat &obj);
  virtual void execute(Bureaucrat const & executor) const = 0;

};
std::ostream& operator<<(std::ostream& o, AForm &obj);
#endif
