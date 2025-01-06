/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:51:28 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 19:54:28 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeToSign;
		const int			_gradeToExec;
		
		AForm();
		AForm&	operator=(const AForm& instance);
		
	public:
		AForm(std::string name, int gradeToSign, int gradeToExec);
		AForm(const AForm& instance);
		~AForm();

		std::string	getName() const;
		bool		getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		
		void			beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute() = 0;
		
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

std::ostream&	operator<<(std::ostream& output, const AForm& instance);

#endif