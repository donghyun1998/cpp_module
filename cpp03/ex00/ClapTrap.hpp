/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:09:01 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/20 17:16:43 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#define MAXHP 10
#define MAXMP 10
# define RESET		"\033[0m"
# define YELLOW		"\033[1;93m"
# define GREEN		"\033[1;92m"
# define BLUE		"\033[1;94m"

#include <string>
#include <iostream>

class ClapTrap {
 protected: // private은 자식클래스에서 접근 불가능하므로
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_dp;
 public:
	ClapTrap();
	ClapTrap(const ClapTrap& obj);
	virtual ~ClapTrap(); // 업캐스팅 경우가 아니라 안해도 똑같이 동작함
	ClapTrap& operator=(const ClapTrap& obj);

	std::string		getName(void) const;
	unsigned int 	getHp(void) const;
	unsigned int 	getEp(void) const;
	unsigned int 	getDp(void) const;
	void			setName(std::string s);
	void		 	setHp(unsigned int num);
	void		 	setEp(unsigned int num);
	void		 	setDp(unsigned int num);

	ClapTrap(std::string name);
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount); // 딜 받았음
	void beRepaired(unsigned int amount); // 수리 하다?
};

#endif
