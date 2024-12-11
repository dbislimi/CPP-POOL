/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:16:16 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/11 16:08:25 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	void	attack(void);
	void	setWeapon(Weapon &weapon);
	
private:

	
	std::string	name;
	Weapon		*weapon;
	
};

#endif
