/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:30:18 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/25 15:36:32 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp" // 이거 안해서 상속 안됐음 근데 오류도 안뜸??왜지

class ScavTrap : public ClapTrap {
 private:
 public:
  ScavTrap();
  ScavTrap(const ScavTrap& obj);
  virtual ~ScavTrap();
  ScavTrap& operator=(const ScavTrap& obj);

  ScavTrap(std::string name);
  void guardGate(void);
  virtual void attack(std::string const& target);
};

#endif
