/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:25:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 18:19:54 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat	a(150, "a");
		Bureaucrat	b(1, "b");


		// a.downGrade();
		a.upGrade();
		std::cout << a << std::endl;
		// b.upGrade();
		b.downGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
