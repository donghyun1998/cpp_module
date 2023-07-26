/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:21:43 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/26 19:58:21 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}
Brain::Brain(const Brain& obj) {}
Brain::~Brain() {}
Brain& Brain::operator=(const Brain& obj) {}
Brain* Brain::newBrain() {
  Brain *res = new Brain();
  return (res);
}
