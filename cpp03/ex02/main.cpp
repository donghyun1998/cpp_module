/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:18 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/20 17:25:49 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("fragA");
	FragTrap	b(a);
	ClapTrap	*c = new FragTrap("fragC");
	b.setName("fragB");

	a.highFivesGuys();
	b.highFivesGuys();
	// c->highFivesGuys();
	delete c;
}
