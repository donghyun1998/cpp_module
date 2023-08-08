/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 02:13:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/08 18:37:09 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#define TOP 1
#define BOTTOM 150

class Bureaucrat {
 private:
  const std::string	_name;
  int	_grade; // 구간 잘 체크해야할듯
 public:
  class GradeTooHighException : public std::exception { // 이거 맞나???
   public:
    const char* what(void) const throw(); // throw 하지 않음을 나타내는 키워드
  };
  class GradeTooLowException : public std::exception { // 이거 맞나???
   public:
    const char* what(void) const throw();
  };

  Bureaucrat();
  Bureaucrat(const Bureaucrat& obj);
  ~Bureaucrat();
  Bureaucrat(int grade, std::string name);
  Bureaucrat& operator=(const Bureaucrat& obj);
  void upGrade();
  void downGrade(); // 이게 최선인가 1등급이 높아서 안 헷갈리게 이름 짓고싶은데
  int getGrade() const;
  std::string getName() const;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat &obj);

#endif
