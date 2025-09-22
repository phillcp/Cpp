/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:04:34 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/08 17:13:27 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal: makes bruh noises" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (this->type);
}
