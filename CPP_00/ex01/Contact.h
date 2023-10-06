/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:11:57 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/06 12:19:28 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
  private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Secret;
	std::string PhoneNumber;
	int Index;

  public:
	void steFirstName(std::string First);
	void steLastName(std::string last);
	void steNickName(std::string Nick);
	void steSecret(std::string sec);
	void stePhoneNumber(std::string PN);
	void steIndix(int i);

	std ::string getFirstName();
	std ::string getLastName();
	std ::string getNickName();
	std ::string getSecret();
	std ::string getPhoneNumber();
	int getIndix();
	std::string ReadMessage(std ::string Message);

	void getData(std::string message);
	std::string selectData(std::string message);
	void setData(int index);

	void display(std ::string str);
	void display_info(void);
	void getData(void);
};

#endif
