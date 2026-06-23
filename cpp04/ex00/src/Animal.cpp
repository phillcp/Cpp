/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:28:48 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 15:01:08 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type){
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	this->_type = other._type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "Animal: makes wierd noises" << std::endl;
}

std::string Animal::getType() const{
	return (this->_type);
}
