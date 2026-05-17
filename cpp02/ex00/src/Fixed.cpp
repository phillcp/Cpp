/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:49:49 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/17 22:13:53 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original){
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &original){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = original.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits(const int raw){
	this->_val = raw;
}
