/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:30:29 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 20:45:42 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name"), ScavTrap(), FragTrap(), _name("Unnamed"){
	this->_hp = FragTrap::default_hp;
	this->_ep = ScavTrap::default_ep;
	this->_dmg = FragTrap::default_dmg;
	std::cout << "Default DiamondTrap Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name){
	this->_hp = FragTrap::default_hp;
	this->_ep = ScavTrap::default_ep;
	this->_dmg = FragTrap::default_dmg;
	std::cout << "DiamondTrap " << this->_name << " started." << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor called for DiamondTrap named: " << this->_name << std::endl;
}

void DiamondTrap::attack(const std::string& target){
	if (this->_hp <= 0 || this->_ep == 0){
		std::cout << "DiamondTrap: " << this->_name << " lacks hp or ep to attack" << std::endl;
		return ;
	}
	if (target.empty()){
		std::cout << "No target was specified for DiamondTrap: " << this->_name << " to attack" << std::endl;
		return ;
	}
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << "I am " << ClapTrap::_name << " also known as: " << this->_name << std::endl;
}
