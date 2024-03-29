/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:33:50 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/25 20:43:34 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "wrong arg" << std::endl;
		return 0;
	}
	RPN rpn(argv[1]);
}
