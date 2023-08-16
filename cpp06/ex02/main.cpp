/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:24:01 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/16 16:13:37 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int luck = std::rand() % 2;

	switch (luck) {
		case 0 : {
			A a = A();
			return (dynamic_cast<Base*>(&a));
		}
		case 1 : {
			B b = B();
			return (dynamic_cast<Base*>(&b));
		}
		case 2 : {
			C c = C();
			return (dynamic_cast<Base*>(&c));
		}
	}
}
void identify(Base* p);
void identify(Base& p);

int	main() {

}
