/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:05:20 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/08 17:06:14 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat: Bruh" << std::endl;
}
