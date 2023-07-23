/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:23:14 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/23 23:37:35 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Dog.hpp"
#include "Cat.hpp"

class Animal {
 protected:
  std::string	type;
 public:
  Animal();
  Animal(const Animal& obj);
  ~Animal();
  Animal& operator=(const Animal& obj);

  virtual void	makeSound() const;
  std::string	getType() const;
};

#endif
