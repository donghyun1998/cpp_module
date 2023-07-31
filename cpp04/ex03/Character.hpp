/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:30:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 20:09:11 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter {
 private:
  AMateria* inventory[4]; // 이거 ice cure가들어오면 터지지않나??
  std::string	name;
 public:
  Character();
  Character(const Character& obj);
  virtual ~Character();
  Character& operator=(const Character& obj);

  virtual std::string const & getName() const;
  virtual void equip(AMateria* m);
  virtual void unequip(int idx);
  virtual void use(int idx, ICharacter& target);
  Character(std::string obj);
};

#endif
