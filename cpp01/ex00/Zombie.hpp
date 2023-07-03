/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:58:31 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/03 20:17:54 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#define OK 0
#define KO 1

#include <string>
#include <iostream>

class Zombie {
private:
	std::string	_name;

public:
	Zombie(std::string str);
	~Zombie();
	std::string	getName(void);
	void		setName(std::string str);
	void		announce( void );
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif
