/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:20:37 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/05 00:10:37 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_func[0] = &Harl::debug;
	_func[1] = &Harl::info;
	_func[2] = &Harl::warning;
	_func[3] = &Harl::error;
}

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

	for (int i = 0; i < 4; i++)
		if (level == levelArr[i])
			(this->*_func[i])();
}
