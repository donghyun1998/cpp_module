/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:28:54 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/07 14:51:34 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	;
}

Fixed::Fixed(const Fixed& obj) {}
Fixed::~Fixed() {}
Fixed& Fixed::operator=(const Fixed& obj) {}
int	Fixed::getRawBits( void ) const {}
void	Fixed::setRawBits( int const raw ) {}
