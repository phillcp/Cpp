/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:04:40 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 22:42:58 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string lvl){
	this->lvls[0] = "DEBUG";
	this->lvls[1] = "INFO";
	this->lvls[2] = "WARNING";
	this->lvls[3] = "ERROR";
	this->comp[0] = &Harl::debug;
	this->comp[1] = &Harl::info;
	this->comp[2] = &Harl::warning;
	this->comp[3] = &Harl::error;
	for (int i = 0; i < 4; i++)
		if(!this->lvls[i].compare(lvl))
			this->lvl = i;
}

Harl::~Harl(){}

void Harl::debug() const{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info() const{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning() const{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error() const{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain( std::string level ){
	level += 1;
	switch (this->lvl){
		case 0:
			(this->*comp[0])();
			(this->*comp[1])();
			(this->*comp[2])();
			(this->*comp[3])();
			break;
		case 1:
			(this->*comp[1])();
			(this->*comp[2])();
			(this->*comp[3])();
			break;
		case 2:
			(this->*comp[2])();
			(this->*comp[3])();
			break;
		case 3:
			(this->*comp[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
