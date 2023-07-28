/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:21:47 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/28 19:58:24 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

void	f(void)
{
	system("leaks animal");
}

int main()
{
	atexit(f);
	// Animal	abstract;
	Animal *zoo[2];
	zoo[0] = new Dog();
	zoo[1] = new Cat();
	delete zoo[0];
	delete zoo[1];

	Cat* a = new Cat();
	Cat* b = new Cat(*a);
	delete a;
	delete b;


	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "-----------------------------------" << std::endl;

	// WrongAnimal *wzoo[2];
	// wzoo[0] = new WrongDog();
	// wzoo[1] = new WrongCat();
	// delete wzoo[0];
	// delete wzoo[1];

	// WrongCat* WrongA = new WrongCat();
	// WrongCat* WrongB = new WrongCat(*WrongA);
	// delete WrongA;
	// delete WrongB;

	// const WrongAnimal* wj = new WrongDog();
	// const WrongAnimal* wi = new WrongCat();
	// delete wj;//should not create a leak
	// delete wi;
}

