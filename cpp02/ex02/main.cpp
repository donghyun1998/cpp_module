/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:28:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/13 16:37:30 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// 0
	std::cout << a << std::endl;
	// 0.00390625
	std::cout << ++a << std::endl;
	// 0.00390625
	std::cout << a << std::endl;
	// 0.00390625
	std::cout << a++ << std::endl;
	// 0.0078125
	std::cout << a << std::endl;
	// 10.1016
	std::cout << b << std::endl;
	// 10.1016
	std::cout << Fixed::max( a, b ) << std::endl;

	//test
	// Fixed c(33.12f), d(42.125f);

	// if (c > d)
	// 	std::cout << "error" << std::endl;
	// if (c >= d)
	// 	std::cout << "error" << std::endl;
	// if (c < d)
	// 	std::cout << "ok" << std::endl;
	// if (c <= d)
	// 	std::cout << "ok" << std::endl;
	// if (c == d)
	// 	std::cout << "error" << std::endl;
	// if (c != d)
	// 	std::cout << "ok" << std::endl;
	// std::cout << c + d << std::endl;
	// std::cout << c - d << std::endl;
	// std::cout << c * d << std::endl;
	// std::cout << c / d << std::endl;
	return 0;
}

