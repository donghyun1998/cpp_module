/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 00:23:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/09 16:44:07 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

static void printVec(std::vector<int> v) {
	for (std::size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << ' ';
	std::cout << std::endl;
}

static void printdeq(std::deque<int> dq) {
	for (std::size_t i = 0; i < dq.size(); i++)
		std::cout << dq[i] << ' ';
	std::cout << std::endl;
}

static void vInsertionSort(std::vector<std::pair< int, int> > &vec) {
	std::size_t n = vec.size();
	for (std::size_t i = 1; i < n; ++i) {
		std::pair<int, int> key = vec[i];
		int j = i - 1;

		while (j >= 0 && vec[j].first > key.first) {
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

void  PmergeMe::vMakeSortedPair(std::vector<int> input) {
	for (std::size_t i = 0; i < input.size() - 1; i += 2) {
		_vPairInput.push_back(std::make_pair(std::max(input[i],input[i + 1]), std::min(input[i],input[i + 1])));
	}
	if (input.size() % 2)
		_remain = input[input.size() - 1];
	else
		_remain = -1;
	vInsertionSort(this->_vPairInput);
	std::vector<int> b;
	for (std::size_t i = 0; i < _vPairInput.size(); i++)
		_vMainChain.push_back(this->_vPairInput[i].first);
}

void PmergeMe::vFillJacobIdx() {
	std::size_t prevprev = 1, prev = 3;

	_vJacobIdx.push_back(0);
	std::size_t cur = 3;
	for (std::size_t i = 0; i < _vPairInput.size() - 1; i++) { // 하나 덜넣어야 함 이미넣었음
		if (cur == prevprev) {
			int oldPrevprev = prevprev;
			prevprev = prev;
			prev = oldPrevprev * 2 + prev;
			cur = prev;
		}
		if (cur > _vPairInput.size())
			cur = _vPairInput.size();
		_vJacobIdx.push_back(cur-- - 1);
	}
}

void PmergeMe::vBinarySearch(int end, int target) {
	int start = 0;

	while (start <= end) { // 범위 검사 수정
		int mid = start + (end - start) / 2;
		if (target > _vMainChain[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	_vMainChain.insert(_vMainChain.begin() + start, target);
}

void PmergeMe::vPendingBtoA() {
	vFillJacobIdx();
	for (std::size_t i = 0; i < this->_vPairInput.size(); i++) {
		int end = std::find(_vMainChain.begin(),_vMainChain.end(), _vPairInput[_vJacobIdx[i]].first) - _vMainChain.begin();
		vBinarySearch(end, _vPairInput[_vJacobIdx[i]].second);
	}
	if (_remain != -1)
		vBinarySearch(_vMainChain.size() - 1, _remain);
}

PmergeMe::PmergeMe(std::vector<int>	vInput, std::deque<int> dInput) {
	clock_t start, finish;

	std::cout << "before:   ";
	printVec(vInput);
	start = clock();
	vMakeSortedPair(vInput);
	vPendingBtoA();
	finish = clock();
	std::cout << "after:   ";
	printVec(_vMainChain);

	printdeq(dInput);

	std::cout << "vector::running time: " << static_cast<double>(finish - start) << "ms" << std::endl;
}
