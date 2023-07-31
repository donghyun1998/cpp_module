/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:01:20 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 19:04:09 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria{
 public:
  Cure();
  Cure(const Cure& obj);
  ~Cure();
  Cure& operator=(const Cure& obj);

  virtual AMateria* clone() const;
  virtual void use(ICharacter& target);
};

#endif
