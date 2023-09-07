/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 00:23:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/07 20:43:11 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

static void ftInsertionSort(std::vector<std::pair< int, int> > &vec) {
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

void  PmergeMe::makeSortedPair(std::vector<int> input) {
	for (std::size_t i = 0; i < input.size() - 1; i += 2) {
		_pairInput.push_back(std::make_pair(std::max(input[i],input[i + 1]), std::min(input[i],input[i + 1])));
	}
	if (input.size() % 2)
		_remain = input[input.size() - 1];
	else
		_remain = -1;
	ftInsertionSort(this->_pairInput);
	std::vector<int> b;
	for (std::size_t i = 0; i < _pairInput.size(); i++)
		_a.push_back(this->_pairInput[i].first);
}

void PmergeMe::fillBIdx() {
	std::size_t prevprev = 1, prev = 3;

	_bIdx.push_back(0);
	std::size_t cur = 3;
	for (std::size_t i = 0; i < _pairInput.size() - 1; i++) { // 하나 덜넣어야 함 이미넣었음
		if (cur == prevprev) {
			int oldPrevprev = prevprev;
			prevprev = prev;
			prev = oldPrevprev * 2 + prev;
			cur = prev;
		}
		if (cur > _pairInput.size())
			cur = _pairInput.size();
		_bIdx.push_back(cur-- - 1);
	}
}

void PmergeMe::binarySearch(int end, int target) {
	int start = 0;

	while (start <= end) { // 범위 검사 수정
		int mid = start + (end - start) / 2;

		if (target < _a[mid])
			end = mid - 1;
		else if (target > _a[mid])
			start = mid + 1;
		else {
			// 중복된 target 처리
			_a.insert(_a.begin() + mid, target);
			return;
		}
	}

	// 타겟이 모든 요소보다 큰 경우 처리
	if (start == static_cast<int>(_a.size()))
		_a.push_back(target);
	else
		_a.insert(_a.begin() + start, target);
}

static void printVec(std::vector<int> v) {
	for (std::size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << ' ';
	std::cout << std::endl;
}

void PmergeMe::pendingBtoA() {
	fillBIdx();
	for (std::size_t i = 0; i < this->_pairInput.size(); i++) {
		int end = std::find(_a.begin(),_a.end(), _pairInput[_bIdx[i]].first) - _a.begin();
		binarySearch(end, _pairInput[_bIdx[i]].second);
	}
	if (_remain != -1)
		binarySearch(_a.size(), _remain);
}



PmergeMe::PmergeMe(std::vector<int>	input) {
	// TODO: 시간 시작하기
	makeSortedPair(input);
	pendingBtoA();
	printVec(_a);
}
