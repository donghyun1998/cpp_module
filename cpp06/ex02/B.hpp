/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:48:23 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/14 15:51:48 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#ifndef B_HPP
#define B_HPP

class B : public Base {
 private:
 public:
  ~B();
  Base * generate(void);
  void identify(Base* p);
  void identify(Base& p);
};

#endif

B::~B() {}
Base * B::generate(void) {}
void B::identify(Base* p) {}
void B::identify(Base& p) {}
