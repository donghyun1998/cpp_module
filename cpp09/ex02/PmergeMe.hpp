/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/09 16:32:20 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <utility> // pair
#include <ctime>
#include <deque>
 // cmd + 1, 2하면 화면 분할 했을때 넘어갈 수 있음 개꿀
class PmergeMe {
 private:
  // class Error : public std::exception {
  //   virtual const char* what() const throw();
  // };
  std::vector<std::pair< int, int> > _vPairInput;
  std::vector<int>  _vMainChain; // mainchain
  std::vector<int>  _vJacobIdx;
  int  _remain;
  std::deque<std::pair< int, int> > _dPairInput;
  std::deque<int>  _dMainChain; // mainchain
  std::deque<int>  _dJacobIdx;

  PmergeMe(const PmergeMe& obj);
  PmergeMe& operator=(const PmergeMe& obj);
  PmergeMe();

  void  vMakeSortedPair(std::vector<int> input);
  void  vMakeMainIdxArr();
  void  vPendingBtoA();
  void  vFillJacobIdx();
  void  vBinarySearch(int end, int target);
 public:
  ~PmergeMe();
  PmergeMe(std::vector<int> vInput, std::deque<int> dInput);
};

#endif

