/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:30:25 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/17 23:31:06 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap {
 private:
 public:
  FragTrap();
  FragTrap(const FragTrap& obj);
  ~FragTrap();
  FragTrap& operator=(const FragTrap& obj);
};

#endif
