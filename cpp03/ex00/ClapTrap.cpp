/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:08:59 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/15 15:14:05 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}
ClapTrap::ClapTrap(const ClapTrap& obj) {}
ClapTrap::~ClapTrap() {}
ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {}
void ClapTrap::attack(const std::string& target) {}
void ClapTrap::takeDamage(unsigned int amount) {}
void ClapTrap::beRepaired(unsigned int amount) {}
