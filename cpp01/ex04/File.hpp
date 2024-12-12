/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:35:35 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/12 19:17:37 by dbislimi         ###   ########.fr       */
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
	void	close(void);
	void	replace(std::string &s1, std::string &s2);
	
private:

	std::string		_filename;
	std::ifstream	file;
	std::string		_content;
	std::streamsize	size;
};

#endif