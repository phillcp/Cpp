/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:27:20 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 15:03:33 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(){
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal(other){
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	this->_type = other._type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const{
	std::cout << "Dog: Woof" << std::endl;
}

void Dog::newIdea(const std::string& idea){
	this->_brain->newIdea(idea);
}

void Dog::printIdeas() const{
	std::cout << std::endl;
	std::cout << this->_type << ":" << std::endl;
	this->_brain->printIdeas();
	std::cout << std::endl;
}
