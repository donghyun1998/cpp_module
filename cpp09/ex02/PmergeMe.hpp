/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:17 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/25 16:46:19 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

class PmergeMe {
 private:
 public:
  PmergeMe();
  PmergeMe(const PmergeMe& obj);
  ~PmergeMe();
  PmergeMe& operator=(const PmergeMe& obj);
};

#endif

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& obj) {}
PmergeMe::~PmergeMe() {}
PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {}
