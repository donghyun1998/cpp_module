/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:18 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/20 17:04:44 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("scavA");
	ScavTrap	b(a);
	ClapTrap	*c = new ScavTrap;
	c->setName("scavC");
	b.setName("scavB");
	a.attack("scavB");
	b.takeDamage(a.getDp());
	a.guardGate();
	delete c;
}
