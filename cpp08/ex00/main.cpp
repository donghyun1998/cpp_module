/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:19:53 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/19 20:18:35 by donghyk2         ###   ########.fr       */
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
	std::queue<int>		q;
	std::stack<int>		stk;
	std::deque<int>		deq;
	std::list<int>		lst;
	std::priority_queue<int>	pq;
	for (int i = 0; i < 5; i++) {
		v.push_back(i);
		q.push(i);
		stk.push(i);
		deq.push_back(i);
		lst.push_back(i);
		pq.push(i);
	}
	std::cout << *easyfind(v, 3) << std::endl;
	std::cout << *easyfind(q, 3) << std::endl;
	std::cout << *easyfind(stk, 3) << std::endl;
	std::cout << *easyfind(deq, 3) << std::endl;
	std::cout << *easyfind(lst, 3) << std::endl;
	std::cout << *easyfind(pq, 3) << std::endl;
}
