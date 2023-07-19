/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/19 21:34:46 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
 private:
 public:
  Cat();
  Cat(const Cat& obj);
  ~Cat();
  Cat& operator=(const Cat& obj);

  virtual void	makeSound();
};

#endif
