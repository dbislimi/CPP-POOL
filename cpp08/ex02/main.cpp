/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:06:18 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/30 15:56:34 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mutant stack: ";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mutant stack: ";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "mutant stack: ";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	
	MutantStack<int> MS;

	MS = mstack;
	std::cout << "mutant stack: ";
	for (MutantStack<int>::iterator it = MS.begin(); it != MS.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	return 0;
}
