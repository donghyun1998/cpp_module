/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:08:44 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 16:13:55 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
 public:
  Ice();
  Ice(const Ice& obj);
  ~Ice();
  Ice& operator=(const Ice& obj);

  virtual AMateria* clone() const;
  virtual void use(ICharacter& target);
};

#endif
