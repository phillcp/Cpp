/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:28:48 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 17:12:05 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type){
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	this->type = other.type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "Animal: makes wierd noises" << std::endl;
}

std::string Animal::getType() const{
	return (this->type);
}
