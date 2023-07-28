/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:35:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 19:26:55 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal {
 private:
  Brain *brain;
 public:
  WrongCat();
  WrongCat(const WrongCat& obj);
  virtual ~WrongCat();
  WrongCat& operator=(const WrongCat& obj);

  virtual void	makeSound() const;
};

#endif
