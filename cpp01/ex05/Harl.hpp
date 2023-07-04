/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:20:39 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 17:45:55 by donghyk2         ###   ########.fr       */
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
		void	(*_func[4])(void);
	public:
		Harl(/* args */);
		~Harl();
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

Harl::Harl(/* args */)
{
	_func[0] = &debug;
}

Harl::~Harl()
{
}

#endif
