/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:51:28 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/06 19:03:54 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_sign;
		const int			_gradeToSign;
		const int			_gradeToExec;
		
		Form();
		Form&	operator=(const Form& instance);
		
	public:
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form& instance);
		~Form();

		std::string	getName() const;
		bool		getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		
		void	beSigned(const Bureaucrat& bureaucrat);

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

std::ostream&	operator<<(std::ostream& output, const Form& instance);

#endif