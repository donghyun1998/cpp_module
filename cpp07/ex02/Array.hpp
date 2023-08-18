/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:14:19 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/18 18:24:23 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
 private:
  T* _array;
  std::size_t _size;
 public:
  Array();
  Array(unsigned int n);
  Array(const Array& obj); // 깊은복사로 구현하래
  ~Array();
  Array& operator=(const Array& obj);
  T& operator[](std::size_t obj);
  std::size_t size() const;
};


#include "Array.tpp" //이렇게 마지막에 인클루드 해주는게 tpp

#endif
