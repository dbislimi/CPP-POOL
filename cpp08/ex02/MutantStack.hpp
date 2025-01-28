/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:22:41 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/28 12:35:05 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <deque>

template< typename T, typename Container = std::deque<T> >
class MutantStack{
	private:
		std::stack<T>	_s;
	public:
		MutantStack();
		MutantStack(const Container& container);
		~MutantStack();

		bool	empty() const;
		size_t	size() const;
		const Container::reference&	top() const;
		void	push(const Container::reference& val);
		template< class... Args>
		void	emplace(Args&&... args){
			this->_s.emplace(args);
		}
		void	pop();
		void	swap(std::stack& x);
		
		
};

#endif
