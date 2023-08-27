/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/27 22:49:31 by donghyk2         ###   ########.fr       */
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

  std::vector<int>  _main;
  std::vector<int>  _sub;

  PmergeMe(const PmergeMe& obj);
  PmergeMe();
  PmergeMe& operator=(const PmergeMe& obj);
 public:
  ~PmergeMe();
  PmergeMe(std::vector<int> input);
};

#endif

