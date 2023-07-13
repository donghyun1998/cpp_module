/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:28:51 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/13 15:56:18 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
 	private:
		int					_raw_bits;
		static const int	_bitsLength = 8;
 	public:
		Fixed();
		Fixed(const Fixed& obj); // 복사생성자
		~Fixed();
		Fixed&	operator=(const Fixed& obj); // =을 재정의 하는 것 - 연산자오버로딩
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		//~ex00
		Fixed( const int d);
		Fixed( const float f);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		// ~ex01
		bool	operator>(const Fixed& obj);
		bool	operator<(const Fixed& obj);
		bool	operator>=(const Fixed& obj);
		bool	operator<=(const Fixed& obj);
		bool	operator==(const Fixed& obj);
		bool	operator!=(const Fixed& obj);
		Fixed&	operator+(const Fixed& obj);
		Fixed&	operator-(const Fixed& obj);
		Fixed&	operator*(const Fixed& obj);
		Fixed&	operator/(const Fixed& obj);
		 //1 + ϵ > 1과 같이 표현 가능한 가장 작은 ϵ
		Fixed&	operator++(); // 전위
		Fixed	operator++(int); // 후위
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&	min(Fixed &first, Fixed &second);
		static Fixed&	max(Fixed &first, Fixed &second);
		static const Fixed&	min(const Fixed &first, const Fixed &second);
		static const Fixed&	max(const Fixed &first, const Fixed &second);
};
		std::ostream&	operator<<(std::ostream &output, const Fixed& obj);
		 // friend빼기 싫으면 공용함수로 만들어야함 - std::ostream의 << 에 수정 불가능하므로
#endif
