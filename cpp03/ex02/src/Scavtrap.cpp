/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:12:41 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/26 12:57:40 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Scavtrap.hpp>

Scavtrap::Scavtrap() : Claptrap(){
	std::cout << "Default Scavtrap." << std::endl;
}

Scavtrap::Scavtrap(std::string name) : Claptrap (name){
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	std::cout << "Scavtrap named: " << name << " was created" << std::endl;
}

Scavtrap::~Scavtrap(){
	std::cout << "Destructor called for scavtrap named: " << this->_name << std::endl;
}

void Scavtrap::attack(const std::string& target){
	this->_ep--;
	std::cout << "Scavtrap named: "<< this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage!" << std::endl;
}

void Scavtrap::guardGate(){
	std::cout << "Scavtrap named: "<< this->_name << " is guarding a gate." << std::endl;
}
