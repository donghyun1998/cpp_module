/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:08:19 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/25 13:54:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
 private:
 public:
  WrongDog();
  WrongDog(const WrongDog& obj);
  ~WrongDog();
  WrongDog& operator=(const WrongDog& obj);

  void	makeSound() const;
};

#endif
