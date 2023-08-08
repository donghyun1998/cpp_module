/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:25:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 00:03:40 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main() {
	try {
		// AForm fa("formA", false, 140, 150);
		Bureaucrat	a(150, "a");
		Bureaucrat	b(140, "b");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
