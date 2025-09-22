/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:04:40 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 19:39:20 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	this->lvls[0] = "debug";
	this->lvls[1] = "info";
	this->lvls[2] = "warning";
	this->lvls[3] = "error";
	this->comp[0] = &Harl::debug;
	this->comp[1] = &Harl::info;
	this->comp[2] = &Harl::warning;
	this->comp[3] = &Harl::error;
}

Harl::~Harl(){}

void Harl::debug() const{
	std::cout << "[DEBUG] - I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() const{
	std::cout << "[INFO] - I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() const{
	std::cout << "[WARNING] - I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() const{
	std::cout << "[ERROR] - This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	for (int i = 0; i < 4; i++)
		if(!this->lvls[i].compare(level))
			(this->*comp[i])();
}
