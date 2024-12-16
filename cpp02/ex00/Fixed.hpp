/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:16:46 by dbislimi          #+#    #+#             */
/*   Updated: 2024/12/16 19:00:58 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

	private:
	
		int					fixed;
		static const int	bits = 8;
	
	public:

		Fixed(void);
		Fixed(const Fixed &toCopie);
		~Fixed(void);
		Fixed	&operator=(const Fixed &toCopie);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif