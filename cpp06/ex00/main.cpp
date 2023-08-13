/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:15:37 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/13 13:34:48 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "wrong arg" << std::endl;
		return (0);
	}
	ScalarConverter::convert(argv[1]);
}
