/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:14:16 by tde-sous          #+#    #+#             */
/*   Updated: 2023/10/24 12:17:51 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main ()
{
	char* str;
	cout << "Teste" << std::endl;
	cin >> str;
	cout << "Input was:" << str;
	/* while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	} */
	return 0;
}
