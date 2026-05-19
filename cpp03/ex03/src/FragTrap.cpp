/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:31:06 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 20:35:38 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Default FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap (name){
	this->_hp = 100;
	this->_ep = default_ep;
	this->_dmg = default_dmg;
	std::cout << "FragTrap named: " << name << " was created" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Destructor called for FragTrap named: " << this->_name << std::endl;
}

void FragTrap::attack(const std::string& target){
	if (this->_hp <= 0 || this->_ep == 0){
		std::cout << "FragTrap: " << this->_name << " lacks hp or ep to attack" << std::endl;
		return ;
	}
	if (target.empty()){
		std::cout << "No target was specified for FragTrap: " << this->_name << " to attack" << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << this->_name << " attacks " << target << ", dealing " << _dmg << " points of damage" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap: " << this->_name << " is asking for highfives" << std::endl;
}
