/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:44:52 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/13 15:54:33 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(std::string filename): found(false), _filename(filename)
{
	char	*content;
	
	this->file.open(_filename.c_str(), std::ios::binary | std::ios::ate);
	if (this->file.fail())
		std::cout << "Error: file \"" << this->_filename << "\" not found." << std::endl;
	else
	{
		found = true;
		this->size = static_cast<std::streamsize>(this->file.tellg());
		content = new char[this->size];
		this->file.seekg(0, std::ios::beg);
		this->file.read(content, size);
		this->_content = std::string(content, this->size);
		delete[] content;
	}
}


File::~File(void)
{
	if (this->found == true)
		this->file.close();
}

void	File::replace(std::string &s1, std::string &s2)
{
	size_t			found;
	size_t			pos;
	std::ofstream	output;
	size_t			s1_len;
	std::streamsize	s2_len;
	
	if (this->found == false)
		return ;
	s1_len = s1.length();
	s2_len = s2.length();
	output.open((this->_filename + ".replace").c_str());
	if (output.fail()){
		std::cout << "Error: failed to create the copy." << std::endl;
		return ;
	}
;	pos = 0;
	found = 0;
	while ((found = this->_content.find(s1, found)) != std::string::npos){
		output.write(this->_content.c_str() + pos, found - pos);
		output.write(s2.c_str(), s2_len);
		found += s1_len;
		pos = found;
	}
	output.write(this->_content.c_str() + pos, this->_content.length() - pos);
	output.close();
}
