/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:39:03 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 18:17:24 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name){
		this->_weapon = NULL;
}
HumanB::~HumanB(){}

void HumanB::attack() const{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& wep){
	this->_weapon = &wep;
}
