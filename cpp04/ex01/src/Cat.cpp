/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:28:20 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 17:11:54 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(){
	this->_brain = new Brain;
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
	this->type = other.type;
	this->_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	this->type = other.type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	return *this;
}

Cat::~Cat(){
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat: Meow" << std::endl;
}

void Cat::newIdea(const std::string& idea){
	this->_brain->newIdea(idea);
}

void Cat::printIdeas() const{
	std::cout << std::endl;
	std::cout << this->type << ":\n";
	this->_brain->printIdeas();
	std::cout << std::endl;
}
