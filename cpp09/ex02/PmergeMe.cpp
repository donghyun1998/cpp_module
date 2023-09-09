/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 00:23:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/09 17:23:08 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

static void printVec(std::vector<int> v) {
	for (std::size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << ' ';
	std::cout << std::endl;
}

// static void printdeq(std::deque<int> dq) {
// 	for (std::size_t i = 0; i < dq.size(); i++)
// 		std::cout << dq[i] << ' ';
// 	std::cout << std::endl;
// }

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


/////////////////////////////////////////// deq

static void dInsertionSort(std::deque<std::pair< int, int> > &deq) {
	std::size_t n = deq.size();
	for (std::size_t i = 1; i < n; ++i) {
		std::pair<int, int> key = deq[i];
		int j = i - 1;

		while (j >= 0 && deq[j].first > key.first) {
			deq[j + 1] = deq[j];
			j--;
		}
		deq[j + 1] = key;
	}
}

void  PmergeMe::dMakeSortedPair(std::deque<int> input) {
	for (std::size_t i = 0; i < input.size() - 1; i += 2) {
		_dPairInput.push_back(std::make_pair(std::max(input[i],input[i + 1]), std::min(input[i],input[i + 1])));
	}
	if (input.size() % 2)
		_remain = input[input.size() - 1];
	else
		_remain = -1;
	dInsertionSort(this->_dPairInput);
	std::deque<int> b;
	for (std::size_t i = 0; i < _dPairInput.size(); i++)
		_dMainChain.push_back(this->_dPairInput[i].first);
}

void PmergeMe::dFillJacobIdx() {
	std::size_t prevprev = 1, prev = 3;

	_dJacobIdx.push_back(0);
	std::size_t cur = 3;
	for (std::size_t i = 0; i < _dPairInput.size() - 1; i++) { // 하나 덜넣어야 함 이미넣었음
		if (cur == prevprev) {
			int oldPrevprev = prevprev;
			prevprev = prev;
			prev = oldPrevprev * 2 + prev;
			cur = prev;
		}
		if (cur > _dPairInput.size())
			cur = _dPairInput.size();
		_dJacobIdx.push_back(cur-- - 1);
	}
}

void PmergeMe::dBinarySearch(int end, int target) {
	int start = 0;

	while (start <= end) { // 범위 검사 수정
		int mid = start + (end - start) / 2;
		if (target > _dMainChain[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	_dMainChain.insert(_dMainChain.begin() + start, target);
}

void PmergeMe::dPendingBtoA() {
	dFillJacobIdx();
	for (std::size_t i = 0; i < this->_dPairInput.size(); i++) {
		int end = std::find(_dMainChain.begin(),_dMainChain.end(), _dPairInput[_dJacobIdx[i]].first) - _dMainChain.begin();
		dBinarySearch(end, _dPairInput[_dJacobIdx[i]].second);
	}
	if (_remain != -1)
		dBinarySearch(_dMainChain.size() - 1, _remain);
}


PmergeMe::PmergeMe(std::vector<int>	vInput, std::deque<int> dInput) {
	clock_t start, finish;

	std::cout << "before:   ";
	printVec(vInput);
	start = clock();
	vMakeSortedPair(vInput);
	vPendingBtoA();
	finish = clock();
	std::cout << "after:    ";
	printVec(_vMainChain);
	std::cout << "vector::running time: " << static_cast<double>(finish - start) << "ms" << std::endl;

	start = clock();
	dMakeSortedPair(dInput);
	dPendingBtoA();
	finish = clock();
	std::cout << "deque::running time:  " << static_cast<double>(finish - start) << "ms" << std::endl;
}
