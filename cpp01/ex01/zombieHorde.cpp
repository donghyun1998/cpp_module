/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:23:26 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/03 20:31:40 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zom = new Zombie[N];
	for (int i = 0; i < N; i++)
		zom[i].setName(name);
	return (zom);
}
