/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:33:04 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 19:24:42 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal {
 protected:
  std::string	type;
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& obj);
  virtual ~WrongAnimal();
  WrongAnimal& operator=(const WrongAnimal& obj);

  virtual void	makeSound() const; // override 키워드 붙혀도 되는데 11버전임 클날뻔
  std::string	getType() const;
};

#endif
