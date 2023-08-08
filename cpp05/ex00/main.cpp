/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:25:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/08 16:39:59 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	Bureaucrat	a(150, "a");
	Bureaucrat	b(1, "b");

	try {
		a.downGrade();
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	a.upGrade();
	std::cout << a << std::endl;
	try {
		b.upGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	b.downGrade();
	std::cout << b << std::endl;
}
