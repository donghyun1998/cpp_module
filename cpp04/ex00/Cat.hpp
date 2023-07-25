/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:31:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/25 13:54:17 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
 private:
 public:
  Cat();
  Cat(const Cat& obj);
  virtual ~Cat();
  Cat& operator=(const Cat& obj);

  virtual void	makeSound() const;
};

#endif
