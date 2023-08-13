/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:49:47 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/13 17:53:12 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main() {
	Data	d;
	d.dummy = 0;

	std::cout << &d << std::endl;
	std::cout << Serializer::serialize(&d) << std::endl;
	std::cout << Serializer::deserialize(Serializer::serialize(&d)) << std::endl;
}
