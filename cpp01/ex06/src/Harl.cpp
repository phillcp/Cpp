/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:04:40 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/23 11:12:34 by fiheaton         ###   ########.fr       */
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

void Harl::debug( void ){
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info( void ){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error( void ){
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain( std::string level ){
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if(!lvls[i].compare(level))
			break ;
		i++;
	}
	switch (i){
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
