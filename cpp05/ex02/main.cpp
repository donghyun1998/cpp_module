/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:25:22 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/09 19:43:07 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main() {
	try {
		Bureaucrat	king(1, "king");
		Bureaucrat	jopab(140, "b");
		ShrubberyCreationForm	form("cadetA"); // target
		form.setName("form");

		king.executeForm(form);
		jopab.executeForm(form);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
