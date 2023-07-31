/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:01:20 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 18:59:04 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria { // Abstract 의 A
 protected:
  std::string type;
 public:
  AMateria();
  AMateria(const AMateria& obj);
  ~AMateria();
  AMateria& operator=(const AMateria& obj);

  AMateria(std::string const & type);
  std::string const & getType() const; //Returns the materia type
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
};

#endif
