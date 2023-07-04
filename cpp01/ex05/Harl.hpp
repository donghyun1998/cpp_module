/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:20:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/05 00:07:03 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#define OK 0
#define KO 1

#include <string>
#include <iostream>

enum Harlfilter {
	debug,
	info,
	warning,
	error
};

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	(Harl::*_func[4])(void);
		Harl();
		void complain( std::string level );
};

#endif
