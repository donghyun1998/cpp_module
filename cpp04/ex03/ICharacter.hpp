/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:05:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 15:06:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include <string>

class ICharacter { // Interface의 I
 private:
 public:
  ICharacter();
  ICharacter(const ICharacter& obj);
  ~ICharacter();
  ICharacter& operator=(const ICharacter& obj);

  virtual ~ICharacter() {}
  virtual std::string const & getName() const = 0;
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter& target) = 0;
};

#endif

ICharacter::ICharacter() {}
ICharacter::ICharacter(const ICharacter& obj) {}
ICharacter::~ICharacter() {}
ICharacter& ICharacter::operator=(const ICharacter& obj) {}
