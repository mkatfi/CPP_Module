/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:16:22 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/06 12:15:32 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include <iostream>
#include "Contact.h"

class PhoneBook
{
	private:
		Contact contact[8];
	public:
		void add_contact(PhoneBook *phonebook, int i);
		void search_contact(PhoneBook *phonebook);
		void printheader();
};



#endif
