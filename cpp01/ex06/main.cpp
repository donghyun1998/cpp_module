/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:47:11 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/05 13:19:43 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl hal;

	hal.complain("DEBUG");
	hal.complain("INFO");
	hal.complain("WARNING");
	hal.complain("ERROR");
}
