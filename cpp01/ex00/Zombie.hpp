/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 19:12:43 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 11:55:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Zombie {

public:

	void	announce(void);
	
	Zombie(const std::string& name);
	~Zombie(void);

private:

	std::string	name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);