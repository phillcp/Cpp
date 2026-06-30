/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:06:26 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/24 13:34:39 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>
#include <string>

Zombie::Zombie(){}

Zombie::~Zombie(){
	std::cout << this->_name << std::endl;
}

void Zombie::announce(){
	std::cout << this->_name << ": BraaaaaiiiinnnnzzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}
