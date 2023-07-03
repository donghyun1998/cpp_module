/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:22:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/03 20:37:27 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void	f(void) {
// 	system("leaks brainz");
// }

int	main() {
	// atexit(f);
	int	n = 8;
	Zombie	*zom = zombieHorde(n, "wally");
	for (int i = 0; i < n; i++)
		zom[i].announce();
	delete[] zom;
}
