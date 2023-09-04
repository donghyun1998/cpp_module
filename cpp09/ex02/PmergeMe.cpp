/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 00:23:49 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/04 20:59:17 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

static void ftInsertionSort(std::vector<std::pair< int, int> > &vec) {
	int n = vec.size();
	for (int i = 1; i < n; ++i) {
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
	for (int i = 0; i < input.size() - 1; i += 2) {
		_pairInput.push_back(std::make_pair(std::max(input[i],input[i + 1])
			, std::min(input[i],input[i + 1])));
	}
	if (input.size() % 2) {
		this->_oddFlag = true;
		this->_remain=  input[input.size() - 1];
	}
	else
		this->_oddFlag = false;
	ftInsertionSort(this->_pairInput);

	for (int i = 0; i < _pairInput.size(); i++) {
		this->_a.push_back(this->_pairInput[i].first);
		this->_b.push_back(this->_pairInput[i].second);
	}
}


void	PmergeMe::makeMainIdxArr() {
	for (int i = 0; i < this->_pairInput.size(); i++)
		this->_mainIdxArr.push_back(i);
}

// int	isJacob[3001] = { 0 };

void PmergeMe::fillIsJacob() {
	int jacob[] = {0, 2, 4, 10, 20, 42, 84, 170, 340, 682, 1364};
	// idx라 하나씩 뺴줬음
	for (int i = 0; i < this->_b.size(); i++)
		this->_isJacob.push_back(0);
	for (int i = 0; i < 10; i++)
		this->_isJacob[jacob[i]] = jacob[i + 1];
	this->_isJacob[jacob[10]] = this->_b.size() - 1;
}

int	PmergeMe::getNextJacobSthalNum(int prevIdx) {
	if (this->_isJacob[prevIdx] != 0)
		return (this->_isJacob[prevIdx]);
}


static bool binarySearch(const std::vector<int>& vec, int end, int target) {
    int start = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (vec[mid] == target)
            return true; // 찾았을 때
        else if (vec[mid] < target)
            start = mid + 1;
		else
            end = mid - 1;
    }

    return false; // 찾지 못했을 때
}

void PmergeMe::pendingBtoA() {
	int idx = 0;
	fillIsJacob();

	while (idx < this->_b.size()) {
		binarySearch(this->_a, idx, this->_b[idx]);
		// 넣은 a의 idx 이상인 mainIdxArr 1씩 더해줌

		idx--;
		// idx == -1일때 2 뱉게 해줘야함
		int nextIdx = getNextJacobSthalNum(idx); // 이게아니야
		if (nextIdx != 0)
			idx = nextIdx;
	}

}


PmergeMe::PmergeMe(std::vector<int>	input) {
	// TODO: 시간 시작하기
	makeSortedPair(input);
	makeMainIdxArr();
	pendingBtoA();
	// _a 출력해주면 끝
}
