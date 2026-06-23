/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:27:20 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 15:01:16 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(){
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog: Woof" << std::endl;
}
