/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:45:55 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 21:27:21 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &original){
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed::Fixed(const int val){
	std::cout << "Int constructor called" << std::endl;
	this->_val = val << _fract;
}

Fixed::Fixed(const float val){
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(val * (1 << _fract));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &original){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = original.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const{
	return (this->_val);
}

void Fixed::setRawBits(int const raw){
	this->_val = raw;
}

int Fixed::toInt() const{
	return (this->_val >> _fract);
}

float Fixed::toFloat() const{
	return (static_cast<float>(this->_val) / (1 << _fract));
}

std::ostream& operator<<(std::ostream &outstr, const Fixed &fixed){
	return (outstr << fixed.toFloat());
}
