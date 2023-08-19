/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:20:13 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/19 21:05:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

template <typename T>
class stk :public std::stack {
  private:
	typename T::iterator iter;
};


template <typename T>
typename T::iterator	easyfind(T& container, int num) {
	typename T::iterator iter;
	iter = std::find(T.begin(), T.end(), num); //아이 및친 순회하면 ko라네
	return (iter);
}

// template <typename T> // 안되자나 시팔
// typename T::container_type::iterator easyfind(T& container, int num) {
//     typename T::container_type::iterator iter = container._Get_container().begin();
//     while (iter != container._Get_container().end()) {
//         if (*iter == num)
//             return iter;
//         iter++;
//     }
//     return iter;
// }

// template <typename T>
// typename T::iterator	easyfind(const T& container, int num) {
// 	typename T::iterator iter;
// 	iter = container.begin();
// 	while (iter != container.end()) {
// 		if (*iter == num)
// 			return (iter);
// 	}
// 	return (iter); // 걍  end 반환하게 함 map 처럼
// }

#endif
