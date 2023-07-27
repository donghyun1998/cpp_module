/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:21:48 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 00:13:29 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain {
 private:
  std::string	ideas[100];
 public:
  Brain();
  Brain(const Brain& obj);
  ~Brain();
  Brain& operator=(const Brain& obj);
};

#endif
