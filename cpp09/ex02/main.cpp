/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:07 by donghyk2          #+#    #+#             */
/*   Updated: 2023/09/14 14:29:02 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>

static bool	checkInput(int argc, char** argv) {
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j]; j++)
			if (!std::isdigit(argv[i][j]) || argv[i][j] == '0')
				return (false);
	}
	return (true);
}

static std::vector<int>	getVectorInput(int argc, char** argv) {
	std::vector<int>	res;

	for (int i = 1; i < argc; i++)
		res.push_back(std::atoi(argv[i]));
	return (res);
}

static bool isSorted(std::vector<int> v) {
	for (std::size_t i = 0; i < v.size() - 1; i++)
		for (std::size_t j = i + 1; j < v.size(); j++)
			if (v[i] > v[j])
				return (false);
	return (true);
}

static std::deque<int>	getDequeInput(int argc, char** argv) {
	std::deque<int>	res;

	for (int i = 1; i < argc; i++)
		res.push_back(std::atoi(argv[i]));
	return (res);
}

int	main(int argc, char** argv) {
	if (argc == 1 || argc == 2 || checkInput(argc, argv) == false) {
		std::cout << "wrong arg" << std::endl;
		return (0);
	}
	std::vector<int> vInput = getVectorInput(argc, argv);
	if (isSorted(vInput)) {
		std::cout << "wrong arg" << std::endl;
		return (0);
	}
	std::deque<int> dInput = getDequeInput(argc, argv);
	PmergeMe pmergeme(vInput, dInput);
}
