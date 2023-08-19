/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:19:53 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/19 15:49:48 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main() {
	// std::vector<int>	v[] = {1, 2, 3, 4, 5};
	std::vector<int>	v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);
	std::cout << *easyfind(v, 3) << std::endl;
}
