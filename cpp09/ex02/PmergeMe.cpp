/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 00:23:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/30 20:22:16 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

static bool	comparePairByFirst(std::pair< int, int> a, std::pair< int, int> b) {
	return (a.first < b.first);
}

void  PmergeMe::makeSortedPair(std::vector<int> input) {
	if (input.size() % 2) {
		this->oddFlag = true;
		for (int i = 0; i < input.size() - 2; i += 2) {
			pairInput.push_back(std::make_pair(std::max(input[i],input[i + 1])
				, std::min(input[i],input[i + 1])));
		}
		this->pairInput.push_back(std::make_pair(INT_MAX,input[input.size() - 1]));
	}
	else {
		this->oddFlag = false;
		for (int i = 0; i < input.size() - 1; i += 2) {
			pairInput.push_back(std::make_pair(std::max(input[i],input[i + 1])
				, std::min(input[i],input[i + 1])));
		}
	}
	std::sort(this->pairInput.begin(), this->pairInput.end(), comparePairByFirst);
}


/*
main  1 2 4 6 8
pending 1 3 5 7
start end 찾아야함
땡겨야 하는데...?

2,1 4,3 6,5 8,7
 이건 쓰레기다

*/


void	PmergeMe::makeMainIdxMap() {
	this->_mainIdxMap =
}


PmergeMe::PmergeMe(std::vector<int>	input) {
	// TODO: 시간 시작하기
	makeSortedPair(input);
	makeMainIdxMap();
}
