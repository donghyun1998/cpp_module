/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:05:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 19:11:24 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "AMateria.hpp" // 이거맞나

class ICharacter { // Interface의 I
 protected:
  AMateria  slot[4]; // ??추상클래스라 배열 안만들어지는데유
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
