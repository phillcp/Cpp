/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:17:40 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 14:40:36 by fiheaton         ###   ########.fr       */
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

	Dog d;
	d.printIdeas();
	d.newIdea("3 e meio");
	{
		Dog tmp = d;
		tmp.printIdeas();
	}
	d.newIdea("4 e meio");
	d.printIdeas();
	return 0;
}
