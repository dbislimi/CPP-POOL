/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:22:40 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/06 20:12:36 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <cstdlib>
# include "contact.hpp"

class PhoneBook {

private:
	Contact contact[7];
	std::string	askfor(std::string value);
	void		print_phonebook(void);
	void		display_contact(int	n);
	
public:

	void	add(void);
	void 	search(void);
};

std::string	trim(const std::string& str);
std::string	shorten(std::string &str, size_t size);
bool		isnum(std::string &str);

#endif