/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 02:13:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/04 21:41:20 by donghyk2         ###   ########.fr       */
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
  const std::string	name;
  int	grade; // 구간 잘 체크해야할듯
 public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat& obj);
  ~Bureaucrat();
  Bureaucrat& operator=(const Bureaucrat& obj);
  void upgrade();
  void downgrade(); // 이게 최선인가 1등급이 높아서 안 헷갈리게 이름 짓고싶은데
  void GradeTooHighException();
  void GradeTooLowException();
};

#endif
