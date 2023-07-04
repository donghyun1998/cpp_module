/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:38:44 by donghyk2          #+#    #+#             */
/*   Updated: 2023/07/04 17:30:59 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	ftError(std::string message) {
	std::cout << message << std::endl;
	exit(1);
}

std::string	getSumOfString(std::string s1, std::string s2) {
	return (s1 + s2);
}

std::string getReplacedLine(std::string line, std::string src, std::string dst) {
	for (int i = 0; i + src.size() <= line.size(); i++)
		if (line.substr(i, src.size()) == src)
			line = line.substr(0, i) + dst + line.substr(i + src.size(), line.size() - (i + src.size()));
	return line;
}

int	main(int argc, char **argv) {

	if (argc != 4)
		ftError("wrong arg");
	std::ifstream	input(argv[1]);
	std::ofstream	output(getSumOfString(argv[1], ".replace"));
	std::string		line;

	if (input.fail() || output.fail())
		ftError("iofstream error");
	while (std::getline(input, line)) {
		output << getReplacedLine(line, argv[2], argv[3]);
		if (!input.eof())
			output << std::endl;
	}
	input.close();
}
