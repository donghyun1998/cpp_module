/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:16:01 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 18:25:57 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
 private:
 std::string	_target;
 public:
  PresidentialPardonForm();
  PresidentialPardonForm(const PresidentialPardonForm& obj);
  ~PresidentialPardonForm();
  PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

  PresidentialPardonForm(std::string target);
  virtual void execute(Bureaucrat const & executor) const;
};

#endif
