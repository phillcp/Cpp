/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:30:29 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/04 16:10:51 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Diamondtrap.hpp"

Diamondtrap::Diamondtrap() : Scavtrap("Nameless"), Fragtrap("Nameless")
{
	std::cout << "Default Diamondtrap." << std::endl;
}

Diamondtrap::Diamondtrap(std::string name) : Claptrap(name + "_clap_name"), Scavtrap(name), Fragtrap(name), _name(name)
{
	this->_hp = Fragtrap::default_hp;
	this->_ep = Scavtrap::default_ep;
	this->_dmg = Fragtrap::default_dmg;
	std::cout << "Diamondtrap " << this->_name << " started." << std::endl;
}

Diamondtrap::~Diamondtrap()
{
	std::cout << "Destructor called for diamondtrap named: " << this->_name << std::endl;
}

void Diamondtrap::attack(const std::string& other)
{
	Scavtrap::attack(other);
}

void Diamondtrap::whoAmI()
{
	std::cout << "I am " << Claptrap::_name << " also known as: " << this->_name << std::endl;
}
