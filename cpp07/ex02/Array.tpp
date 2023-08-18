/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:41:29 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/18 18:43:30 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() {}
template <typename T>
Array<T>::Array(unsigned int n) {}
template <typename T>
Array<T>::Array(const Array& obj) {}
template <typename T>
Array<T>::~Array() {}
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj) {}
template <typename T>
T& Array<T>::operator[](std::size_t obj) {}
template <typename T>
std::size_t Array<T>::size() const {}
