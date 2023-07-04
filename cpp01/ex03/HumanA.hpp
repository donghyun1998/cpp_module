/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:28:00 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 14:11:09 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#define OK 0
#define KO 1

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_humanName;
		Weapon	&_weaponName;
	public:
		HumanA(std::string name, Weapon &weaponName);
		~HumanA();
		void		setHumanName(std::string name);
		std::string	getHumanName(void);
		std::string	getWeaponName(void);
		void		attack();
};

#endif
