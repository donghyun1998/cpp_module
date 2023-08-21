/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:43:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/21 18:21:10 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char* Span::InvalidParameter::what() const throw() {
	return ("InvalidParameter");
}

const char* Span::SizeOver::what() const throw() {
	return ("SizeOver");
}

const char* Span::NoSpan::what() const throw() {
	return ("NoSpan");
}

Span::Span() : _N(10) {}
Span::Span(const Span& obj) : _N(obj._N), _v(obj._v) {}
Span::~Span() {}
Span& Span::operator=(const Span& obj) {
	if (this != &obj) {
		const_cast<unsigned int&>(this->_N) = obj._N;
		_v.clear();
		_v.insert(_v.begin(), obj._v.begin(), obj._v.end());
	}
	return (*this);
}
Span::Span(unsigned int N) : _N(N) {}
void Span::addNumber(int num) {
	if (this->_v.size() == this->_N)
		throw (SizeOver());
	this->_v.push_back(num);
}
unsigned int	Span::shortestSpan() {
	if (this->_v.size() < 2)
		throw (NoSpan());
	sort(this->_v.begin(), this->_v.end());

	int distance = this->_v[1] - this->_v[0];
	for (unsigned int i = 0; i < this->_v.size() - 1; i++)
		distance = std::min(distance, this->_v[i + 1] - this->_v[i]);
	return (distance);
}
unsigned int	Span::longestSpan() {
	if (this->_v.size() < 2)
		throw (NoSpan());
	int	max = *std::max_element(this->_v.begin(), this->_v.end());
	int	min = *std::min_element(this->_v.begin(), this->_v.end());
	return (max - min);
}
