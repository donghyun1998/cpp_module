/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:30:18 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/17 21:15:27 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap {
 private:
 public:
  ScavTrap();
  ScavTrap(const ScavTrap& obj);
  ~ScavTrap();
  ScavTrap& operator=(const ScavTrap& obj);

  ScavTrap(std::string name);
  //TODO: 추가함수 구현
};

#endif
