/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:50:23 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/14 15:51:38 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#ifndef C_HPP
#define C_HPP

class C : public Base {
 private:
 public:
  ~C();
  Base * generate(void);
  void identify(Base* p);
  void identify(Base& p);
};

#endif

C::~C() {}
Base * B::generate(void) {}
void B::identify(Base* p) {}
void B::identify(Base& p) {}
