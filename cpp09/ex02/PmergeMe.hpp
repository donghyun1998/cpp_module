/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/28 22:08:06 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <iostream>
#include <exception>
 // cmd + 1, 2하면 화면 분할 했을때 넘어갈 수 있음 개꿀
class PmergeMe {
 private:
  class Error : public std::exception {
    virtual const char* what() const throw();
  };
  std::vector<int, int> pairInput;
  std::vector<int>  _main;
  std::vector<int>  _sub;

  PmergeMe(const PmergeMe& obj);
  PmergeMe& operator=(const PmergeMe& obj);

  void  makeSortedPair(std::vector<int> input);

 public:
  PmergeMe(); // 이거 왜 프라이빗이면 오류나지 전엔 안이랬는데
  ~PmergeMe();
  PmergeMe(std::vector<int> input);
};

#endif

