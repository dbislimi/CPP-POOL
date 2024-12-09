/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:38:21 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/09 18:59:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->NbContacts = 0;
	this->full = false;
}

std::string	PhoneBook::askfor(std::string value)
{
	std::string	buff;

	while (true)
	{
		std::cout << value << ": ";
		std::getline(std::cin, buff);
		buff = trim(buff);
		if (!isalnumstr(buff))
		{
			std::cout << "Please enter alphanumeric characters only." << std::endl;
			continue ;
		}
		if (buff != "")
			break ;
		std::cout << "Field cannot be empty" << std::endl;
	}
	return (buff);
}

void	PhoneBook::print_phonebook(void)
{
	std::cout << std::endl << "--------------------------------------------" << std::endl;
	std::cout << "   INDEX  | FIRSTNAME| LASTNAME | NICKNAME " << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < this->NbContacts; ++i)
	{
		std::cout << std::setw(10) << i << '|';
		std::cout << std::setw(10) << shorten(this->contact[i].FirstName, 10) << '|';
		std::cout << std::setw(10) << shorten(this->contact[i].LastName, 10) << '|';
		std::cout << std::setw(10) << shorten(this->contact[i].NickName, 10) << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::display_contact(int n)
{
	std::cout << std::endl << "First Name     : " << this->contact[n].FirstName << std::endl;
	std::cout << "Last Name      : " << this->contact[n].LastName << std::endl;
	std::cout << "Nick Name      : " << this->contact[n].NickName << std::endl;
	std::cout << "Phone Number   : " << this->contact[n].Number << std::endl;
	std::cout << "Darkest Secret : " << this->contact[n].DarkestSecret << std::endl;
}

void	PhoneBook::add(void)
{
	static int	i;
	std::string	answer;

	while (i == 8 || this->full)
	{
		this->full = true;
		if (i == 8)
			i = 0;
		std::cout << std::endl << "The phonebook is full(8), this action will delete your oldest contact(" << i << ").";
		std::cout << std::endl << "Continue ? [y/n]: ";
		std::getline(std::cin, answer);
		answer = trim(answer);
		if (answer == "n")
			return ;
		else if (answer == "y")
			break ;
	}
	std::cout << std::endl << "Creating new contact ..." << std::endl;
	answer = askfor("First Name");
	this->contact[i].FirstName = answer;
	answer = askfor("Last Name");
	this->contact[i].LastName = answer;
	answer = askfor("Nickname");
	this->contact[i].NickName = answer;
	answer = askfor("Phone Number");
	this->contact[i].Number = answer;
	answer = askfor("Darkest Secret");
	this->contact[i].DarkestSecret = answer;
	std::cout << std::endl << "New contact successfully added !" << std::endl;
	++i;
	if (this->NbContacts != 8)
		this->NbContacts = i;
}

void	PhoneBook::search(void)
{
	std::string	buff;
	int			n;

	if (this->contact[0].FirstName == "")
	{
		std::cout << std::endl << "----------------------------------------" << std::endl;
		std::cout << "|       Your phonebook is empty        |" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		return ;
	}
	print_phonebook();
	while (true)
	{
		std::cout << "Please enter the contact index to display, or quit(q): ";
		std::getline(std::cin, buff);
		buff = trim(buff);
		if (buff == "q" || buff == "")
			return ;
		if (isnum(buff))
		{
			n = atoi(buff.c_str());
			if (n >= 0 && n < this->NbContacts)
			{
				display_contact(n);
				return ;
			}
			std::cout << "Unvalid index, must be between 0 and " << this->NbContacts - 1 << "." << std::endl << std::endl;
		}
	}
}
