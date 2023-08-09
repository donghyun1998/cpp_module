/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:30:57 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 19:34:10 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <cstdlib> // rand때매
#include <ctime>

class RobotomyRequestForm : public AForm {
 private:
  std::string	_target;
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm& obj);
  virtual ~RobotomyRequestForm();
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

  RobotomyRequestForm(std::string target);
  virtual void execute(Bureaucrat const & executor) const;
};

#endif
