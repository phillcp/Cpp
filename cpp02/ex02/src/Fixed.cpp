/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:45:55 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/17 23:15:09 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_val = 0;
}

Fixed::Fixed(const Fixed &original){
	*this = original;
}

Fixed::Fixed(const int val){
	this->_val = val << _fract;
}

Fixed::Fixed(const float val){
	this->_val = roundf(val * (1 << _fract));
}

Fixed::~Fixed(){}

Fixed& Fixed::operator=(const Fixed &original){
	this->_val = original.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &original) const{
	return (this->_val < original._val);
}

bool Fixed::operator>(const Fixed &original) const{
	return (this->_val > original._val);
}

bool Fixed::operator>=(const Fixed &original) const{
	return (this->_val >= original._val);
}

bool Fixed::operator<=(const Fixed &original) const{
	return (this->_val <= original._val);
}

bool Fixed::operator==(const Fixed &original) const{
	return (this->_val == original._val);
}

bool Fixed::operator!=(const Fixed &original) const{
	return (this->_val != original._val);
}

Fixed Fixed::operator+(const Fixed &original) const{
	return (this->toFloat() + original.toFloat());
}

Fixed Fixed::operator-(const Fixed &original) const{
	return (this->toFloat() - original.toFloat());
}

Fixed Fixed::operator*(const Fixed &original) const{
	return (this->toFloat() * original.toFloat());
}

Fixed Fixed::operator/(const Fixed &original) const{
	return (this->toFloat() / original.toFloat());
}

Fixed Fixed::operator++(void){
	this->_val++;
	return(*this);
}
Fixed Fixed::operator++(int){
	const Fixed oldval (*this);
	this->_val++;
	return(oldval);
}
Fixed Fixed::operator--(void){
	this->_val--;
	return(*this);
}
Fixed Fixed::operator--(int){
	const Fixed oldval (*this);
	this->_val--;
	return(oldval);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return (out);
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
	return (a > b ? a : b);
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
