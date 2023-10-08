/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:34:43 by kfm               #+#    #+#             */
/*   Updated: 2023/10/08 13:27:17 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void Contact::steFirstName(std::string First)
{
	FirstName = First;
}
void Contact::steLastName(std::string last)
{
	LastName = last;
}
void Contact::steNickName(std::string Nick)
{
	NickName = Nick;
}
void Contact::steSecret(std::string sec)
{
	Secret = sec;
}
void Contact::stePhoneNumber(std::string PN)
{
	PhoneNumber = PN;
}
void Contact ::steIndix(int i)
{
	Index = i;
}

std ::string Contact::getFirstName()
{
	return (FirstName);
}
std ::string Contact::getLastName()
{
	return (LastName);
}
std ::string Contact::getNickName()
{
	return (NickName);
}
std ::string Contact::getSecret()
{
	return (Secret);
}
std ::string Contact::getPhoneNumber()
{
	return (PhoneNumber);
}
int Contact::getIndix()
{
	return (Index);
}

int Contact::check(const std::string str)
{
    int i =0;
    int j =0;
	while(str[i])
	{
		if (isalnum(str[i]))
			j++;
		i++;
	}
	if (j == 0)
		return (1);
	return 0;
}

std::string Contact ::ReadMessage(std ::string Message)
{
	int	i;

	std::string Str;
	std::cout << Message;
	getline(std::cin, Str);

	if(std::cin.eof())
		exit(0);
	while (Str.empty())
		return (ReadMessage(Message));
	if(check(Str) == 1)
		return (ReadMessage(Message));
	if (!Message.compare("Enter phone number : "))
	{
		i = 0;
		while (Str[i])
		{
			if (isdigit(Str[i]) == false)
			{
				std::cout << "Invalid phone number" << std::endl;
				Str.clear();
				return (ReadMessage(Message));
			}
			i++;
		}
	}
	return (Str);
}

void Contact::setData(int index)
{
	steFirstName(ReadMessage("Enter first name : "));
	steLastName(ReadMessage("Enter last name : "));
	steNickName(ReadMessage("Enter nickname : "));
	stePhoneNumber(ReadMessage("Enter phone number : "));
	steSecret(ReadMessage("Enter secret : "));
	steIndix(index);
}

void Contact::display(std ::string str)
{
	int	i;
	int	j;

	if (str.size() > 10)
	{
		i = 0;
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".|";
	}
	else
	{
		j = (10 - str.size());
		while (j != 0)
		{
			std::cout << " ";
			j--;
		}
		std::cout << str;
		std::cout << "|";
	}
}

void Contact::display_info(void)
{
	std ::cout << std ::endl;
	std ::cout << "_______________________________________\n";
	std ::cout << "*index		||	" << getIndix() << std ::endl;
	std ::cout << "=======================================\n";
	std::cout << "*First Name	||	" << getFirstName() << std::endl;
	std::cout << "*Last Name	||	" << getLastName() << std::endl;
	std::cout << "*NickName	||	" << getNickName() << std::endl;
	std::cout << "*Phone Number	||	" << getPhoneNumber() << std::endl;
	std::cout << "*Secret		||	" << getSecret() << std::endl;
	std ::cout << "=======================================\n";
	std ::cout << std ::endl;
}

void Contact::getData(void)
{
	std::cout << getIndix() << "    |";
	display(getFirstName());
	display(getLastName());
	display(getNickName());
	std::cout << std::endl;
}
