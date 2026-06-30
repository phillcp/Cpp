/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:02:40 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/24 13:35:04 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack() const{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
