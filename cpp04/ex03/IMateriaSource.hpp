/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:09:35 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/31 19:18:58 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource {
 private:
 public:
  IMateriaSource();
  IMateriaSource(const IMateriaSource& obj);
  IMateriaSource& operator=(const IMateriaSource& obj);

  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif

IMateriaSource::IMateriaSource() {}
IMateriaSource::IMateriaSource(const IMateriaSource& obj) {}
IMateriaSource& IMateriaSource::operator=(const IMateriaSource& obj) {}
IMateriaSource::~IMateriaSource() {}
