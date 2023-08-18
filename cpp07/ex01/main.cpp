/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:05:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/18 17:29:42 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	add(T& arr) {
	arr++;
}

int	main() {
	int arr[5] = {1, 2, 3, 4, 5};

	iter(arr, 5, add);
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;
}
