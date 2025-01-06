/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:24:26 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 19:18:00 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "AForm.hpp"
#include <iostream>

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	
		Bureaucrat();

	public:
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat& instance);
		~Bureaucrat();
		Bureaucrat&	operator=(const Bureaucrat& instance);
		Bureaucrat&	operator+=(int n);
		Bureaucrat&	operator-=(int n);
		
		void				upgrade(int n = 1);
		void				downgrade(int n = 1);
		const std::string&	getName() const;
		int					getGrade() const;
		
		void	signForm(AForm& form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream& output, const Bureaucrat& instance);

#endif