/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:07:04 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/27 17:20:05 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span {
	private:
		unsigned int	_N;
		std::vector<int>	_vct;
		
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& instance);
		~Span();
		Span&	operator=(const Span& instance);

		void	addNumber(int i);
		int		shortestSpan();
		int		longestSpan();
		void	addList(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class MaxCapacity : public std::exception{
			public:
				const char*	what() const throw(){
					return ("Span's max capacity has been reached.");
				}
		};

		class NotEnough : public std::exception{
			public:
				const char*	what() const throw(){
					return ("Not enough elements.");
				}
		};
};

#endif