/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:27:20 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/08 17:01:28 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(){
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog: Woof" << std::endl;
}
