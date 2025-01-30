/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:22:41 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/30 15:49:06 by dbislimi         ###   ########.fr       */
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
		MutantStack&	operator=(const MutantStack& instance){
			if (this == &instance)
				return (*this);
			std::stack<T, Container>::operator=(instance);
			return (*this);
		}

		typedef typename Container::iterator	iterator;
		typedef typename Container::iterator	const_iterator;

		iterator		begin()			{return (this->c.begin());}
		iterator		end() 			{return (this->c.end());}
		const_iterator	begin() const 	{return (this->c.begin());}
		const_iterator	end() const 	{return (this->c.end());}
};

#endif
