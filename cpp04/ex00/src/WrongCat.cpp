/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:05:20 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 15:06:56 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(){
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat: Bruh" << std::endl;
}
