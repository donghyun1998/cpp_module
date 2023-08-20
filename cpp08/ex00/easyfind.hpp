/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:20:13 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/21 00:38:32 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T& container, int num) {
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), num); //순회하면 koㄷㄷㄷ
	return (iter);
}
template <typename T>
typename T::iterator	easyfind(const T& container, int num) {
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), num);
	return (iter);
}

#endif
