/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbislimi <dbislimi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:49:53 by dbislimi          #+#    #+#             */
/*   Updated: 2025/01/03 17:56:04 by dbislimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int	size = 4;
	AAnimal* a[size];

	for (int i = 0; i < size/2; ++i)
		a[i] = new Dog();
	for (int i = size/2; i < size; ++i)
		a[i] = new Cat();
	std::cout << std::endl;

	a[size/2 + 1]->floodBrain("lasagna", 22);

	Cat cat(*dynamic_cast<Cat*>(a[size/2 + 1]));
	cat.displayIdeas();
	
	std::cout << std::endl;
	for (int i = 0; i < size; ++i){
		a[i]->makeSound();
	}
	
	std::cout << std::endl;
	for (int i = 0; i < size; ++i)
		delete a[i];
	
	cat.displayIdeas();
	return 0;
}