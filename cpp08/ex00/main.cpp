/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:19:53 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/21 00:35:24 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <list>

int	main() {
	std::vector<int>	v;
	std::deque<int>		deq;
	std::list<int>		lst;
	for (int i = 0; i < 5; i++) {
		v.push_back(i);
		deq.push_back(i);
		lst.push_back(i);
	}
	std::cout << *easyfind(v, 3) << std::endl;
	std::cout << *easyfind(deq, 3) << std::endl;
	std::cout << *easyfind(lst, 3) << std::endl;
}
