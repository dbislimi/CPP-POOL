/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:10:22 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 14:01:02 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Zombie {

public:

	void	announce(void);
	void	setName(const std::string& name);

private:

	std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);