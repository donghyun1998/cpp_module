/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 01:10:26 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/18 17:30:09 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void	iter(T* arr, std::size_t length, void (*f)(T&)) {
	for (std::size_t i = 0; i < length; i++)
		f(arr[i]);
}

#endif
