/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:28:54 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/11 18:59:59 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	_raw_bits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) {
	std::cout << "Copy constructor called" << std::endl;
	_raw_bits = obj.getRawBits();
}

// Fixed::Fixed(const Fixed& obj) : _raw_bits(obj.getRawBits()){
// 	std::cout << "Copy assignment operator called" << std::endl;
// }

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = obj.getRawBits();
	return (*this);
}
int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_bits);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw_bits = raw;
}
