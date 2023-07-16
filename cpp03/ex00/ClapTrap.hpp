/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:01 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/16 21:03:08 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#define MAXHP 10
#define MAXMP 10

#include <string>
#include <iostream>
#include <string>

class ClapTrap {
 private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_dp;
 public:
	ClapTrap();
	ClapTrap(const ClapTrap& obj);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& obj);

	std::string		getName(void);
	unsigned int 	getHp(void);
	unsigned int 	getEp(void);
	unsigned int 	getDp(void);
	void			setName(std::string s);
	void		 	setHp(unsigned int num);
	void		 	setEp(unsigned int num);
	void		 	setDp(unsigned int num);

	ClapTrap(std::string name);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount); // 딜 받았음
	void beRepaired(unsigned int amount); // 수리 하다?
};

#endif
