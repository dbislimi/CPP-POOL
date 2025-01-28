/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:22:41 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/28 16:43:32 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <deque>

template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack{
	public:
		MutantStack();
		MutantStack(const Container& container);
		~MutantStack();

		typedef typename Container::reference	reference;
		typedef typename Container::value_type	value_type;
		typedef typename Container::iterator	iterator;
		typedef typename Container::iterator	const_iterator;
		
		bool	empty() const;
		size_t	size() const;
		const reference&	top() const;
		void	push(const value_type& val);
		template< class... Args>
		void	emplace(Args&&... args){
			this->c.emplace(args);
		}
		void	pop();
		void	swap(MutantStack& x);

		iterator	begin() const;
		iterator	end() const;
		const_iterator	begin() const;
		const_iterator	end() const;
		
		const std::stack<T>&	getStack() const;
};

#include "MutantStack.tpp"

#endif
