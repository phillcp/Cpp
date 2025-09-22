/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:54:52 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 18:18:24 by fheaton-         ###   ########.fr       */
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
