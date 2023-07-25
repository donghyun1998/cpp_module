/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:21:47 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/25 13:58:28 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal(); // const로 선언해서 const함수가 아니면 못씀
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound! ?? 몬소리여
j->makeSound();
meta->makeSound();
delete meta;
delete i;
delete j;
std::cout << "---------------------------------" << std::endl;
const WrongAnimal* w_meta = new WrongAnimal(); // const로 선언해서 const함수가 아니면 못씀
const WrongAnimal* w_j = new WrongDog();
const WrongAnimal* w_i = new WrongCat();
std::cout << w_j->getType() << " " << std::endl;
std::cout << w_i->getType() << " " << std::endl;
w_i->makeSound();
w_j->makeSound();
w_meta->makeSound();
delete w_meta;
delete w_i;
delete w_j;
}
