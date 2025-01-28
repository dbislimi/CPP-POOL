/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:22:41 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/28 16:58:16 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <deque>

template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
	public:
		MutantStack(): std::stack<T, Container>(){}

		MutantStack(const Container& container): std::stack<T, Container>(container){}
		~MutantStack(){}

		typedef typename Container::iterator	iterator;
		typedef typename Container::iterator	const_iterator;

		iterator		begin()			{return (this->c.begin());}
		iterator		end() 			{return (this->c.end());}
		const_iterator	begin() const 	{return (this->c.begin());}
		const_iterator	end() const 	{return (this->c.end());}
};

#endif
