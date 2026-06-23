/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:17:40 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 15:13:27 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	std::cout << std::endl << "Uncomment the 3 lines in the main.cpp file" << std::endl;
	std::cout << "Animal will give a compilation error due to it's class being strictly virtual" << std::endl;
	std::cout << "(As is intended)" << std::endl;
	std::cout << "While both Dog and Cat classes still work as normal" << std::endl << std::endl;

	// Animal b;
	// Dog c;
	// Cat d;

	return 0;
}
