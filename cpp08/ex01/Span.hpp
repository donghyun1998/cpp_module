/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:43:27 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/21 01:49:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>

class Span {
 private:
	std::vector<int>	_v; // 이렇게 하면 사이즈가 터질수도 있지 않나?? 내부 구현 살펴봐야할듯
 public:
  Span();
  Span(const Span& obj);
  ~Span();
  Span& operator=(const Span& obj);

  void addNumber(int num); // 이미 있는거 넣으면 exception throw
  unsigned int	shortestSpan(); // 이게 먼소리지
  unsigned int	longestSpan();
  // TODO: 여러개 한번에 addnumber하는 함수 만들것
};

#endif

Span::Span() {}
Span::Span(const Span& obj) {}
Span::~Span() {}
Span& Span::operator=(const Span& obj) {}
