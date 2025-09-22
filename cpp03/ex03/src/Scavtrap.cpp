/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:12:41 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/04 15:59:53 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Scavtrap.hpp>

Scavtrap::Scavtrap() : Claptrap(){
	std::cout << "Default Scavtrap." << std::endl;
}

Scavtrap::Scavtrap(std::string name) : Claptrap (name){
	this->_hp = default_hp;
	this->_ep = default_ep;
	this->_dmg = default_dmg;
	std::cout << "Scavtrap named: " << name << " was created" << std::endl;
}

Scavtrap::~Scavtrap(){
	std::cout << "Destructor called for scavtrap named: " << this->_name << std::endl;
}

void Scavtrap::attack(const std::string& target){
	this->_ep--;
	std::cout << this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage!" << std::endl;
}

void Scavtrap::guardGate(){
	std::cout << "Scavtrap named: "<< this->_name << " is guarding a gate." << std::endl;
}
