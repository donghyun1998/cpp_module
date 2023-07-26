/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:23:14 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/26 20:08:06 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
 protected:
  std::string	type;
 public:
  Animal();
  Animal(const Animal& obj);
  virtual ~Animal();
  Animal& operator=(const Animal& obj);

  virtual void	makeSound() const; // override 키워드 붙혀도 되는데 11버전임 클날뻔
  std::string	getType() const;
};

#endif
