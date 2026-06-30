/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:54:52 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/24 13:35:10 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type){}

Weapon::~Weapon(){}

std::string Weapon::getType() const{
	return (this->_type);
}

void Weapon::setType(std::string const type){
	this->_type = type;
}
