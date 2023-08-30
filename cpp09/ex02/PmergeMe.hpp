/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/30 16:39:03 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#define INT_MAX 2147483647

#include <vector>
#include <iostream>
#include <exception>
#include <utility> // pair
 // cmd + 1, 2하면 화면 분할 했을때 넘어갈 수 있음 개꿀
class PmergeMe {
 private:
  class Error : public std::exception {
    virtual const char* what() const throw();
  };
  std::vector<std::pair< int, int> > pairInput;
  std::vector<int>  _main;
  std::vector<int>  _pending;
  std::vector<int>  _mainIdxMap;
  bool  oddFlag; // TODO: 마지막에 intmax하나 빼줘야함, 중복은 어떻게 할지

  PmergeMe(const PmergeMe& obj);
  PmergeMe& operator=(const PmergeMe& obj);
  PmergeMe();

  void  makeSortedPair(std::vector<int> input);
  void  makeMainIdxMap();

 public:
  ~PmergeMe();
  PmergeMe(std::vector<int> input);
};

#endif

