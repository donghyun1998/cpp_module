/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:25:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 20:34:08 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main() {
	try {
		Intern	i;
		std::cout << (i.makeForm("P", "target"))->getName() << std::endl;
		std::cout << (i.makeForm("R", "target"))->getName() << std::endl;
		std::cout << (i.makeForm("S", "target"))->getName() << std::endl;
		std::cout << (i.makeForm("C", "target"))->getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
