/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:53:12 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/06 12:16:39 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <string>
#include "PhoneBook.h"

void PhoneBook::printheader()
{
	std ::cout << std ::endl;
	std ::cout << "_______________________________________\n";
	std ::cout << "index" << "|";
	std :: cout << "First Name" << "|";
	std :: cout << "Last Name " << "|";
	std ::cout << "Nick Name " << "|";
	std ::cout << "\n_______________________________________\n";
}

void	PhoneBook::search_contact(PhoneBook *phonebook)
{
	std::string	buffer;

	int			index;
	index = 0;

	if (phonebook->contact[index].getFirstName().empty())
	{
		std::cout << "No contact in the phonebook" << std::endl;
		return;
	}
	phonebook->printheader();
	while (index < 8 && phonebook->contact[index].getFirstName().size())
	{
		phonebook->contact[index].getData();
		index++;
	}
	std ::cout << "_______________________________________\n";
	index--;
	while (true)
	{
		std::cout << "Enter index of the contact : ";
		if (!getline(std::cin, buffer))
			return ;
		else if (buffer.size() != 1 || !std::isdigit(buffer[0])
			|| (buffer[0]- 48 ) > index )
			std::cout << "Invalid index" << std::endl;
		else
			break ;
	}
	index = buffer[0] - 48;
	phonebook->contact[index].display_info();
}

void PhoneBook::add_contact(PhoneBook *phonebook, int i)
{
	phonebook->contact[i].setData(i);
}


void PrintMessage()
{
	std::cout << std::endl
			  << "    -**-    WELCOME TO PHONEBOOK    -**-    ";
	std :: cout << "\n*****************MENU*******************\n";
	std :: cout << "*                                        *\n";
	std :: cout << "*****choices [ADD,  SEARCH,  EXIT] *******\n";
	std :: cout << "*                                        *\n";
	std :: cout << "******************************************\n";
	std :: cout << std::endl << std::endl;
}

int	main()
{
	PhoneBook	phonebook;
	std::string	buffer;
	int index;
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
