/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:04:40 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/08 16:03:51 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	this->comp[0] = &Harl::debug;
	this->comp[1] = &Harl::info;
	this->comp[2] = &Harl::warning;
	this->comp[3] = &Harl::error;
}

Harl::~Harl(){}

void Harl::debug(){
	std::cout << "Warning -> I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "Info -> I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "Warning -> I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "Error -> This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if(!lvls[i].compare(level))
			(this->*comp[i])();
}
