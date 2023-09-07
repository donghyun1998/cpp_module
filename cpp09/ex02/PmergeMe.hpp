/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/07 20:03:05 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <utility> // pair
 // cmd + 1, 2하면 화면 분할 했을때 넘어갈 수 있음 개꿀
class PmergeMe {
 private:
  // class Error : public std::exception {
  //   virtual const char* what() const throw();
  // };
  std::vector<std::pair< int, int> > _pairInput;
  std::vector<int>  _a; // mainchain
  std::vector<int>  _bIdx;
  int  _remain;

  PmergeMe(const PmergeMe& obj);
  PmergeMe& operator=(const PmergeMe& obj);
  PmergeMe();

  void  makeSortedPair(std::vector<int> input);
  void  makeMainIdxArr();
  void  pendingBtoA();
  void fillBIdx();
  void binarySearch(int end, int target);
 public:
  ~PmergeMe();
  PmergeMe(std::vector<int> input);
};

#endif

