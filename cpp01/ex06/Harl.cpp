/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:04:13 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/13 17:53:33 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				<< std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl
				<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
				<< std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void(Harl::*function)();
	function	comp[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			levelIndex;
	
	levelIndex = -1;
	while (++levelIndex < 5)
		if (levelIndex == 4 || levels[levelIndex] == level)
			break ;
	switch (levelIndex)
	{
		case 0:
			(this->*comp[levelIndex++])();
		case 1:
			(this->*comp[levelIndex++])();
		case 2:
			(this->*comp[levelIndex++])();
		case 3:
		{
			(this->*comp[levelIndex])();
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
