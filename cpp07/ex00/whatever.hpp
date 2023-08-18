/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:41:15 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/18 17:04:11 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include <string>

template <typename T>
void	swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <typename T>
T	min(T a, T b) {
	if (a > b)
		return (b);
	return (a);
}
template <typename T>
T	max(T a, T b) {
	if (a > b)
		return (a);
	return (b);
}
#endif
