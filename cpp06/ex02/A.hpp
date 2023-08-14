/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:45:03 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/14 15:54:05 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#ifndef A_HPP
#define A_HPP

class A : public Base {
 private:
 public:
  virtual ~A();
  Base * generate(void);
  void identify(Base* p);
  void identify(Base& p);

};

#endif
