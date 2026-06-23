/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:17:40 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 14:56:33 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	const Animal* a = new Animal();
	std::cout << std::endl;
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	std::cout << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wc = new WrongCat();
	std::cout << std::endl;
	std::cout << d->getType() << std::endl;
	d->makeSound();
	std::cout << c->getType() << std::endl;
	c->makeSound();
	a->makeSound();
	std::cout << std::endl;
	std::cout << wc->getType() << std::endl;
	wc->makeSound();
	wa->makeSound();
	std::cout << std::endl;
	
	delete c;
	delete d;
	std::cout << std::endl;
	delete wc;
	std::cout << std::endl;
	delete a;
	delete wa;
	
	return 0;
}
