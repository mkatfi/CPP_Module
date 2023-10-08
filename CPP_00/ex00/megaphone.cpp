/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:32:05 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/08 13:14:14 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
	char c;

	i = 1;
    if (ac == 1)
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			c = toupper(av[i][j]);
			av[i][j] = c;
			std::cout << av[i][j];
			j++;
		}
		i++;
	}
    std::cout << std::endl;
    return (0);
}

