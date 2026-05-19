/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:27:23 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 15:03:52 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <iostream>

Brain::Brain() : _ideanbr(0){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other){
	for (int i = 0; i < other._ideanbr; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
	this->_ideanbr = other._ideanbr;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other){
	for (int i = 0; i < other._ideanbr; i++)
	{
		if (other._ideas[i].empty())
			break ;
		this->_ideas[i] = other._ideas[i];
	}
	this->_ideanbr = other._ideanbr;
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::printIdeas() const{
	if (this->_ideanbr == 0){
		std::cout << "	Brain: empty" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_ideanbr; i++)
	{
		std::cout << "	Brain (" << i << "): " << this->_ideas[i] << std::endl;
	}

}

void Brain::newIdea(const std::string& idea){
	if (this->_ideanbr == 100){
		std::cout << "	Brain: full of ideas." << std::endl;
		return ;
	}
	this->_ideas[this->_ideanbr++] = idea;
}
