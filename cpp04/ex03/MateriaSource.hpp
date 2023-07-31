/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:32:40 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 20:43:40 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
 private:
  AMateria*	skills[2];
 public:
  MateriaSource();
  MateriaSource(const MateriaSource& obj);
  MateriaSource& operator=(const MateriaSource& obj);

  virtual ~MateriaSource() {}
  virtual void learnMateria(AMateria*);
  virtual AMateria* createMateria(std::string const & type);
};

#endif
