/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:04:13 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/13 16:54:21 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
				<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void(Harl::*function)();
	function	comp[4] = {&Harl::info, &Harl::debug, &Harl::error, &Harl::warning};
	std::string	levels[4] = {"info", "debug", "error", "warning"};
	
	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*comp[i])();
			return ;
		}
	}
	std::cout << "Error: level not found. (debug, info, warning, error)" << std::endl;
}
