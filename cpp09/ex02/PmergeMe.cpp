/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 00:23:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/29 18:59:25 by donghyk2         ###   ########.fr       */
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
			pairInput.push_back(std::make_pair(input[i],input[i + 1]));
		}
		this->pairInput.push_back(std::make_pair(INT_MAX,input[input.size() - 1]));
	}
	else {
		this->oddFlag = false;
		for (int i = 0; i < input.size() - 1; i += 2) {
			this->pairInput.push_back(std::make_pair(input[i],input[i + 1]));
		}
	}
	std::sort(this->pairInput.begin(), this->pairInput.end(), comparePairByFirst);
}


PmergeMe::PmergeMe(std::vector<int>	input) {
	// TODO: 시간 시작하기, 홀수 어떻게 뺄지, 굳이 페어로 안받고 그대로 main, sub 나눠도 될지
	makeSortedPair(input);

}
