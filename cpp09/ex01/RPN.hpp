/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:33:45 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/23 20:34:25 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <stack>

class RPN {
 private:
 public:
  RPN();
  RPN(const RPN& obj);
  ~RPN();
  RPN& operator=(const RPN& obj);
};

#endif

RPN::RPN() {}
RPN::RPN(const RPN& obj) {}
RPN::~RPN() {}
RPN& RPN::operator=(const RPN& obj) {}
