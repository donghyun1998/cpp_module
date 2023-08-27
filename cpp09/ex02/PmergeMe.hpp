/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/27 22:42:34 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <iostream>
#include <exception>

class PmergeMe {
 private:
  class InputError : public std::exception {
    virtual const char* what() const throw();
  };

  std::vector<std::pair<int, int> > _input;

  PmergeMe(const PmergeMe& obj);
  PmergeMe();
  PmergeMe& operator=(const PmergeMe& obj);
 public:
  ~PmergeMe();
  PmergeMe(std::vector<int> input);
};

#endif

