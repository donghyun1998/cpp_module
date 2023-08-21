/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:43:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/21 18:26:08 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>

class Span {
 private:
  const unsigned int  _N;
	std::vector<int>	_v;
  class InvalidParameter : public std::exception {
    virtual const char * what() const throw();
  };
  class SizeOver : public std::exception {
    virtual const char * what() const throw();
  };
  class NoSpan : public std::exception {
    virtual const char * what() const throw();
  };
 public:
  Span();
  Span(const Span& obj);
  ~Span();
  Span& operator=(const Span& obj);

  Span(unsigned int N);
  void addNumber(int num);
  unsigned int	shortestSpan();
  unsigned int	longestSpan();
  template <typename T>
  void  addNumberOfRange(typename T::iterator begin, typename T::iterator end) {
    unsigned int size = std::distance(begin, end);
    if (size < 0)
      throw (InvalidParameter());
    if (this->_v.size() + size > this->_N)
      throw (SizeOver());
    this->_v.insert(this->_v.end(), begin, end);
  }
};

#endif
