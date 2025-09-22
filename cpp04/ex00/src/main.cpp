/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:17:40 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 15:45:47 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
const Animal* meta = new Animal();
std::cout << std::endl;
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << std::endl;
const WrongAnimal* nut = new WrongAnimal();
std::cout << std::endl;
const WrongAnimal* k = new WrongCat();
std::cout << std::endl;
std::cout << j->getType() << " " << std::endl;
j->makeSound();
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
meta->makeSound();
std::cout << std::endl;
std::cout << k->getType() << " " << std::endl;
k->makeSound();
nut->makeSound();
std::cout << std::endl;

delete i;
delete j;
std::cout << std::endl;
delete k;
std::cout << std::endl;
delete meta;
delete nut;

return 0;
}
