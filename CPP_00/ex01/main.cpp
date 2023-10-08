/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:53:12 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/06 22:39:05 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	PrintMessage(void)
{
	std::cout << "\n   -**-    WELCOME TO PHONEBOOK    -**-    ";
	std ::cout << "\n*****************MENU*********************\n";
	std ::cout << "*                                        *\n";
	std ::cout << "*****choices [ADD,  SEARCH,  EXIT] *******\n";
	std ::cout << "*                                        *\n";
	std ::cout << "******************************************\n";
	std ::cout << std::endl << std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;
	int			index;

	std::string buffer;
	index = 0;
	PrintMessage();
	while (1)
	{
		std::cout << "Phonebook > ";
		if (!getline(std::cin, buffer))
			break ;
		if (buffer == "EXIT")
			break ;
		else if (buffer == "ADD")
		{
			if (index == 8)
				index = 0;
			phonebook.add_contact(&phonebook, index);
			index++;
		}
		else if (buffer == "SEARCH")
			phonebook.search_contact(&phonebook);
		else
			std ::cout << "command not fond try again \n";
	}
	return (0);
}
