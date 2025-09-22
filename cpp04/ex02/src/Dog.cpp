/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:27:20 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 17:11:58 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(){
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal(other){
	this->type = other.type;
	this->_brain = new Brain(*other._brain);
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	this->type = other.type;
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
	std::cout << this->type << ":\n";
	this->_brain->printIdeas();
	std::cout << std::endl;
}
