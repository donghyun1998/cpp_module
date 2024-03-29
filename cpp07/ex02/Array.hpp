/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:14:19 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/25 21:01:30 by donghyk2         ###   ########.fr       */
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
  class Invalid_index : public std::exception {
    virtual const char* what() const throw() {
        return ("invalid index");
    }
  };
  class Invalid_address : public std::exception {
    virtual const char* what() const throw() {
        return ("invalid address");
    }
  };
 public:
  Array() {
    this->_size = 0;
    this->_array = NULL;
  }
  Array(unsigned int n) {
    this->_size = n;
    this->_array = new T[n];
  }
  Array(const Array& obj) {
    this->_size = obj._size;
    this->_array = new T[obj._size];
    for (std::size_t i = 0; i < this->_size; i++)
      this->_array[i] = obj._array[i];
  }
  ~Array() {
    if (this->_array) {
      delete[] this->_array;
      this->_array = NULL;
      this->_size = 0;
    }
  }
  Array& operator=(const Array& obj) {
    if (this->_array) {
      delete[] this->_array;
      this->_array = NULL;
      this->_size = 0;
    }
    this->_size = obj._size;
    this->_array = new T[obj._size];
    for (std::size_t i = 0; i < this->_size; i++)
      this->_array[i] = obj._array[i];
    return (*this);
  }
  T& operator[](std::size_t obj) {
    if (this->_array == NULL)
      throw (Invalid_address());
    if (this->_size <= obj)
      throw (Invalid_index());
    return (this->_array[obj]);
  }
  std::size_t size() const {
    return (this->_size);
  }
};

#endif
