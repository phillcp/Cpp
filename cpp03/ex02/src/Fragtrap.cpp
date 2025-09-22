/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:31:06 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/26 14:13:59 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fragtrap.hpp>

Fragtrap::Fragtrap() : Claptrap(){
	std::cout << "Default Fragtrap." << std::endl;
}

Fragtrap::Fragtrap(std::string name) : Claptrap (name){
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
	std::cout << "Fragtrap named: " << name << " was created" << std::endl;
}

Fragtrap::~Fragtrap(){
	std::cout << "Destructor called for Fragtrap named: " << this->_name << std::endl;
}

void Fragtrap::attack(const std::string& target){
	this->_ep--;
	std::cout << "Fragtrap named: "<< this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage!" << std::endl;
}

void Fragtrap::highFivesGuys(){
	std::cout << "Fragtrap: " << this->_name << " enthusiaticaly asks for highfives!" << std::endl;
}
