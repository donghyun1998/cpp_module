/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:51:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/11 01:02:07 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>

class ScalarConverter { // static class는 static 멤버 변수함수 만 있어야함
 private:
  ScalarConverter();
  ScalarConverter(const ScalarConverter& obj);
  ~ScalarConverter();
  ScalarConverter& operator=(const ScalarConverter& obj);
 public:

  static void	printChar(const std::string& input);
  static void	printInt(const std::string& input);
  static void	printFloat(const std::string& input);
  static void	printDouble(const std::string& input);
  static void convert(const std::string& input); //리터럴이라 const로받아야함
};

#endif

// chat int float double