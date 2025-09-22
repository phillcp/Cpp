/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:52:43 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/23 16:03:08 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(std::string name){
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_dmg = 0;
	std::cout << std::endl << "Constructor called for claptrap name: " << this->_name << std::endl << std::endl;
}

Claptrap::~Claptrap(){
	std::cout << std::endl << "Destructor called for claptrap name:" << this->_name << std::endl << std::endl;
}

void Claptrap::attack(const std::string& target){
	if (this->_hp == 0 || this->_ep == 0){
		std::cout << "Claptrap: " << this->_name << " lacks hp or ep to complete attack" << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "Claptrap: "<< this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage!" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount){
	this->_hp -= amount;
	std::cout << "Claptrap: "<< this->_name << " takes " << amount << " points of damage, he only has " << this->_hp << " points of health!" << std::endl;
}

void Claptrap::beRepaired(unsigned int amount){
	if (this->_hp == 0 || this->_ep == 0){
		std::cout << "Claptrap: " << this->_name << " lacks hp or ep to complete repair" << std::endl;
		return ;
	}
	this->_hp += amount;
	this->_ep--;
	std::cout << "Claptrap: "<< this->_name << " was repaired for " << amount << " of hp, to a total of " << _hp << " points of health!" << std::endl;
}
