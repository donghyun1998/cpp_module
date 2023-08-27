/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:46:07 by donghyk2          #+#    #+#             */
/*   Updated: 2023/08/27 23:06:06 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>

 // TODO: `shuf -i 1-100000 -n 3000 | tr "\n" " "` 이거 뭐 어케하는겨

static bool	checkInput(int argc, char** argv) {
	// TODO: "3 4 5 6" 이런거도 해야하나?
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j]; j++)
			if (!std::isdigit(argv[i][j]))
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

static bool checkDuplicate(std::vector<int> v) {
	for (int i = 0; i < v.size() - 1; i++)
		for (int j = i + 1; j < v.size(); j++)
			if (v[i] == v[j])
				return (false);
	return (true);
}

int	main(int argc, char** argv) {
	if (argc == 1 || checkInput(argc, argv) == false) {
		std::cout << "wrong arg" << std::endl;
		return (0);
	}
	std::vector<int> input = getVectorInput(argc, argv);
	if (checkDuplicate(input) == false) {
		std::cout << "duplicated arg" << std::endl;
		return (0);
	}
	PmergeMe(input);
}
