/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:35:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/25 13:53:58 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 private:
 public:
  WrongCat();
  WrongCat(const WrongCat& obj);
  ~WrongCat();
  WrongCat& operator=(const WrongCat& obj);

  void	makeSound() const;
};

#endif
