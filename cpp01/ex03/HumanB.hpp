/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:15:19 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 14:26:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#define OK 0
#define KO 1

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_humanName;
		Weapon	*_weaponName;
	public:
		HumanB(std::string name);
		~HumanB();
		void		setHumanName(std::string name);
		void		setWeapon(Weapon &name);
		std::string	getHumanName(void);
		std::string	getWeaponName(void);
		void		attack();
};

#endif
