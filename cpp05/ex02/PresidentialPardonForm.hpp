/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:17:11 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/09 16:32:41 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <cstdlib>

class PresidentialPardonForm : public AForm{
	private:
		std::string	_target;
		PresidentialPardonForm();
	
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& instance);
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& instance);

		void	exec() const;
		
};

#endif