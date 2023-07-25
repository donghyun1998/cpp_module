/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:54 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/25 13:54:23 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
 private:
 public:
  Dog();
  Dog(const Dog& obj);
  virtual ~Dog();
  Dog& operator=(const Dog& obj);

  virtual void	makeSound() const;
};

#endif
