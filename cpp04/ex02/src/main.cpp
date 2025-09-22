/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:17:40 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 17:26:20 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	Animal* a[10];
	std::cout << std::endl << "Constructor Time" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl << i + 1 << ":" << std::endl;
		if (i % 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	std::cout << std::endl;

	
	std::cout << std::endl << "Destructor Time" << std::endl;
	for (int i = 9; i >= 0; i--)
	{
		std::cout << std::endl << i + 1 << ":" << std::endl;
		delete a[i];
	}
	std::cout << std::endl;

	Dog basic;
	basic.printIdeas();
	basic.newIdea("3 e meio");
	{
		Dog tmp = basic;
		tmp.printIdeas();
	}
	basic.newIdea("4 e meio");
	basic.printIdeas();

	std::cout << std::endl;

	// ex02 example:
	
	// Animal b;
	// Dog c;
	// Cat d;

	return 0;
}
