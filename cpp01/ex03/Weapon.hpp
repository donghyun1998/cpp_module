/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:11:36 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 16:54:06 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#define OK 0
#define KO 1

#include <string>
#include <iostream>

class Weapon {
	private:
		std::string	_name;
	public:
		Weapon(std::string name);
	void		setType(std::string name);
	const std::string	&getType(void);
};

#endif
