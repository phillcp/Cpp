/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:12:41 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 19:54:39 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap(){
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	std::cout << "Default ScavTrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap (name){
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	std::cout << "ScavTrap named: " << name << " was created" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called for ScavTrap named: " << this->_name << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->_hp <= 0 || this->_ep == 0){
		std::cout << "ScavTrap: " << this->_name << " lacks hp or ep to attack" << std::endl;
		return ;
	}
	if (target.empty()){
		std::cout << "No target was specified for ScavTrap: " << this->_name << " to attack" << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ScavTrap named: "<< this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap named: "<< this->_name << " is now in Gatekeeper mode" << std::endl;
}
