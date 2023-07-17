/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:18 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/17 21:55:50 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("scavA");
	ScavTrap	b(a);
	b.setName("scavB");
	ScavTrap	c;
	c = b;
	c.setName("scavC");

	a.attack("scavB");
	b.takeDamage(a.getDp());
	a.guardGate();
}
