/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:08:19 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 19:26:38 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongDog : public WrongAnimal {
 private:
  Brain *brain;
 public:
  WrongDog();
  WrongDog(const WrongDog& obj);
  virtual ~WrongDog();
  WrongDog& operator=(const WrongDog& obj);

  virtual void	makeSound() const;
};

#endif
