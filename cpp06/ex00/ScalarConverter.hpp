/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:51:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/13 16:09:40 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> // atof땜시

class ScalarConverter { // static class는 static 멤버 변수함수 만 있어야함
 private:
  ScalarConverter();
  ScalarConverter(const ScalarConverter& obj);
  ~ScalarConverter();
  ScalarConverter& operator=(const ScalarConverter& obj);
	// 이게 완벽한 static class아닐까
  static double	_value;

 public:
  static void	printChar();
  static void	printInt();
  static void	printFloat();
  static void	printDouble();
  static void convert(const std::string& input); //리터럴이라 const로받아야함
};

#endif

// chat int float double
