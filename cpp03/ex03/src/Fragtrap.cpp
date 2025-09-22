/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:31:06 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/04 16:00:28 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fragtrap.hpp>

Fragtrap::Fragtrap() : Claptrap(){
	std::cout << "Default Fragtrap." << std::endl;
}

Fragtrap::Fragtrap(std::string name) : Claptrap (name){
	this->_hp = default_hp;
	this->_ep = default_ep;
	this->_dmg = default_dmg;
	std::cout << "Fragtrap named: " << name << " was created" << std::endl;
}

Fragtrap::~Fragtrap(){
	std::cout << "Destructor called for Fragtrap named: " << this->_name << std::endl;
}

void Fragtrap::attack(const std::string& target){
	this->_ep--;
	std::cout << this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage!" << std::endl;
}

void Fragtrap::highFivesGuys(){
	std::cout << "Fragtrap: " << this->_name << " enthusiaticaly asks for highfives!" << std::endl;
}
