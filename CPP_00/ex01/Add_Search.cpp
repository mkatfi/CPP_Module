/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add_Search.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:32:26 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/06 22:36:54 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void PhoneBook::printheader()
{
	std ::cout << std ::endl;
	std ::cout << "_______________________________________\n";
	std ::cout << "index" << "|";
	std ::cout << "First Name" << "|";
	std ::cout << "Last Name " << "|";
	std ::cout << "Nick Name " << "|";
	std ::cout << "\n_______________________________________\n";
}

void PhoneBook::search_contact(PhoneBook *phonebook)
{
	int	index;

	std::string buffer;
	index = 0;
	if (phonebook->contact[index].getFirstName().empty())
	{
		std::cout << "No contact in the phonebook" << std::endl;
		return ;
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
		else if (buffer.size() != 1 || !std::isdigit(buffer[0]) || (buffer[0]
				- 48) > index)
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
