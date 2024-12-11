/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:48:51 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 14:19:26 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;
	
	std::cout << "adress of brain		: " << &brain << std::endl
				<< "adress held by stringPTR: " << stringPTR << std::endl
				<< "adress held by stringREF: " << &stringREF << std::endl
				<< "value of brain		     : " << brain << std::endl
				<< "value pointed to by stringPTR: " << *stringPTR << std::endl
				<< "value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
