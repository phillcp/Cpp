/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:28:48 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/08 17:19:17 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
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
