/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:56:56 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/10 18:02:49 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern {
	private:
		Intern(const Intern& instance);
		Intern&	operator=(const Intern& instance);
		
	public:
		Intern();
		~Intern();

		AForm*	makeForm(std::string form, std::string target);
};