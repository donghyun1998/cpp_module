/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:54 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/19 21:35:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
 private:
 public:
  Dog();
  Dog(const Dog& obj);
  ~Dog();
  Dog& operator=(const Dog& obj);

  virtual void	makeSound();
};

#endif
