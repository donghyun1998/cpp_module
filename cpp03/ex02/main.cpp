/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:18 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/17 23:45:28 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("fragA");
	FragTrap	b(a);
	b.setName("fragB");
	FragTrap	c;
	c = b;
	c.setName("fragC");

	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();
}
