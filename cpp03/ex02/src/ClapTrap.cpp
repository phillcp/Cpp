/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:52:43 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 19:41:31 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->_name = "Unnamed";
	this->_hp = 10;
	this->_ep = 10;
	this->_dmg = 0;
	std::cout << "Default ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->_name = name;
	this->_hp = 10;
	this->_ep = 10;
	this->_dmg = 0;
	std::cout << "ClapTrap named: " << name << " was created" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << std::endl << "Destructor called for ClapTrap named: " << this->_name << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->_hp <= 0 || this->_ep == 0){
		std::cout << "ClapTrap: " << this->_name << " lacks hp or ep to complete attack" << std::endl;
		return ;
	}
	if (target.empty()){
		std::cout << "No target was specified for ClapTrap: " << this->_name << " to attack" << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ClapTrap named: "<< this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->_hp -= amount;
	std::cout << "ClapTrap named: "<< this->_name << " takes " << amount << " points of damage, he has " << this->_hp << " health left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_hp <= 0 || this->_ep == 0){
		std::cout << "ClapTrap named: " << this->_name << " lacks hp or ep to complete repair" << std::endl;
		return ;
	}
	this->_hp += amount;
	this->_ep--;
	std::cout << "ClapTrap named: "<< this->_name << " was repaired for " << amount << " of hp, to a total of " << _hp << " points of health" << std::endl;
}
