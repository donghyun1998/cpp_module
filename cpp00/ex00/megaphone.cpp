/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyk2 <donghyk2@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:20:56 by donghyk2          #+#    #+#             */
/*   Updated: 2023/05/29 22:47:44 by donghyk2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	PrintUpperString(char *s)
{
	for (int i = 0; s[i]; i++)
	{
		if (std::islower(s[i]))
			std::cout << (char)std::toupper(s[i]); // 형변환 안해주니까 int로 찍는다 toupper 리턴값은 int임
		else
			std::cout << s[i];
	}
}

int	main(int argc, char **argv) // cpp는 카멜케이스가 표준이다 스네이크 안녕~
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	for (int i = 1; i < argc; i++)
		PrintUpperString(argv[i]);
	std::cout << '\n';
}
