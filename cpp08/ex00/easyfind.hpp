/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:20:13 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/19 15:50:22 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>


template <typename T>
typename T::iterator	easyfind(T& container, int num) {
	typename T::iterator iter;
	iter = container.begin();
	while (iter != container.end()) {
		if (*iter == num)
			return (iter);
		iter++;
	}
	return (iter);
}
// template <typename T>
// typename T::iterator	easyfind(T& const container, int num) {
// 	typename T::iterator iter;
// 	iter = container.begin();
// 	while (iter != container.end()) {
// 		if (*iter == num)
// 			return (iter);
// 	}
// 	return (iter);
// }

#endif
