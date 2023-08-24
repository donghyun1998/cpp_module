/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:33:45 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/25 00:53:44 by donghyk2         ###   ########.fr       */
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
  class error : std::exception {
    virtual const char* what() const throw();
  };
 public:
  RPN(std::string input);
};

#endif
