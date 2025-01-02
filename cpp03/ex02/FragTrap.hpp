/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:46:44 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/02 17:51:34 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap();
		FragTrap	&operator=(const FragTrap& other);

		void	highFivesGuys();
};

#endif