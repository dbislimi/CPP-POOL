/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:35:35 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/13 15:38:25 by dbislimi         ###   ########.fr       */
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
	~File(void);
	void	replace(std::string &s1, std::string &s2);
	
private:

	bool			found;
	std::string		_filename;
	std::ifstream	file;
	std::string		_content;
	std::streamsize	size;
};

#endif