/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:27:23 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 17:12:13 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <iostream>

Brain::Brain() : _curr_idea(0){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other){
	for (int i = 0; i < other._curr_idea; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
	this->_curr_idea = other._curr_idea;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other){
	for (int i = 0; i < other._curr_idea; i++)
	{
		if (other._ideas[i].empty())
			break;
		this->_ideas[i] = other._ideas[i];
	}
	this->_curr_idea = other._curr_idea;
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::printIdeas() const{
	if (this->_curr_idea == 0){
		std::cout << "	Brain: empty" << std::endl;
		return;
	}
	for (int i = 0; i < this->_curr_idea; i++)
	{
		std::cout << "	Brain (" << i << "): " << this->_ideas[i] << std::endl;
	}

}

void Brain::newIdea(const std::string& idea){
	if (this->_curr_idea == 100){
		std::cout << "	Brain: full of ideas." << std::endl;
		return;
	}
	this->_ideas[this->_curr_idea++] = idea;
}
