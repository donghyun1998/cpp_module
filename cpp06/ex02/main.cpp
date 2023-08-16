/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:24:01 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/16 18:15:28 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void) {
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int luck = std::rand() % 3;

	switch (luck) {
		case 0 : {
			A *a = new A();
			return (dynamic_cast<Base*>(a));
		}
		case 1 : {
			B *b = new B();
			return (dynamic_cast<Base*>(b));
		}
		case 2 : {
			C *c = new C();
			return (dynamic_cast<Base*>(c));
		}
	}
	return (NULL);
}
void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}
void identify(Base& p) {

	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e) {}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &e) {}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &e) {}
}

int	main() {
	Base* example = generate();
	identify(example);
	identify(*example);
	delete example;
}
