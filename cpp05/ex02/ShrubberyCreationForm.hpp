/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:38:14 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 16:53:24 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
 private:
 std::string  _target;
 public:
   class OutfileException : public std::exception {
   public:
    const char* what(void) const throw();
  };
  ShrubberyCreationForm();
  ShrubberyCreationForm(const ShrubberyCreationForm& obj);
  virtual ~ShrubberyCreationForm();
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

  ShrubberyCreationForm(std::string target);
  virtual void execute(Bureaucrat const & executor) const;
};

#endif
