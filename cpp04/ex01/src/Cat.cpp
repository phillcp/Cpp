/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:28:20 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 17:14:49 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(){
	this->_brain = new Brain;
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	this->_type = other._type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	return (*this) ;
}

Cat::~Cat(){
	delete this->_brain;
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
	std::cout << this->_type << ":" << std::endl;
	this->_brain->printIdeas();
	std::cout << std::endl;
}
