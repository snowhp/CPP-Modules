/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:14:16 by tde-sous          #+#    #+#             */
/*   Updated: 2023/10/25 11:38:18 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main (int argc, char **argv)
{
	if (argc != 1)
	{
		for(int i = 1; argv[i]; i++)
		{
			for(int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return 0;
}
