/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 02:13:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/03 02:14:01 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat {
 private:
 public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat& obj);
  ~Bureaucrat();
  Bureaucrat& operator=(const Bureaucrat& obj);
};

#endif

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat& obj) {}
Bureaucrat::~Bureaucrat() {}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {}
