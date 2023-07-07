/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:28:51 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/07 14:49:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
 	private:
		int					_value;
		static const int	_constant = 8;
 	public:
		Fixed();
		Fixed(const Fixed& obj); // 복사생성자
		~Fixed();
		Fixed& operator=(const Fixed& obj); // =을 재정의 하는 것 - 연산자오버로딩
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
