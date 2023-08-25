/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:33:45 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/25 20:41:32 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <iostream>
#include <string>
#include <cctype>
#include <exception>

class RPN {
 private:
  class Error : public std::exception {
    virtual const char* what() const throw();
  };
  class DevideByZero : public std::exception {
    virtual const char* what() const throw();
  };

  std::stack<int> _s;

  RPN();
  RPN(const RPN& obj);
  RPN& operator=(const RPN& obj);

  std::string	getToken(int startIdx);
  void  checkInput(std::string input);
  void	calculate(char input);
  void  plus();
  void  minus();
  void  multiply();
  void  devide();
 public:
  ~RPN();
  RPN(std::string input);
};

#endif
