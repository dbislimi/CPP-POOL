/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:35:35 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 19:46:32 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

#include <iostream>
#include <iomanip>
#include <fstream>

class File{

public:

	File(std::string filename);
	void	replace(std::string &s1, std::string &s2);
	
private:

	bool	isFound(void) const;
	std::string		_filename;
	std::string		content;
	bool			found;
	std::ifstream	_file;
};

#endif