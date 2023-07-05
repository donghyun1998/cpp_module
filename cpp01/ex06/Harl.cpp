/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:20:37 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/05 13:34:40 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "DEBUGDEBUGDEBUGDEBUGDEBUGDEBUGDEBUG" << std::endl;
}
void	Harl::info( void ) {
	std::cout << "INFOINFOINFOINFOINFOINFOINFOINFO" << std::endl;
}
void	Harl::warning( void ) {
	std::cout << "WARNINGWARNINGWARNINGWARNINGWARNING" << std::endl;
}
void	Harl::error( void ) {
	std::cout << "ERRORERRORERRORERRORERRORERRORERROR" << std::endl;
}
void	Harl::complain( std::string level ) {
	std::string levelArr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			levelNum = -1;

	for (int i = 0; i < 4; i++)
		if (level == levelArr[i])
			levelNum = i;
	switch (levelNum) {
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
		default:
			std::cout << "Easter Egg" << std::endl;
			break;
	}
}
