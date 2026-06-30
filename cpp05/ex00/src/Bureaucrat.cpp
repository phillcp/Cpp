/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:41:43 by fiheaton          #+#    #+#             */
/*   Updated: 2026/06/30 17:18:51 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade > 150){
		throw std::string("Bureaucrat::GradeTooHighException");
	}
	if (grade < 1){
		throw std::string("Bureaucrat::GradeTooLowException");
	}
	this->_grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

int Bureaucrat::getGrade() const{
	return (this->_grade);
}

const std::string Bureaucrat::getName() const{
	return (this->_name);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& original){
	this->_grade = original.getGrade();
}

std::ostream& Bureaucrat::operator<<(std::ostream& os, const Bureaucrat& bc){
	os << bc.getName() << ", bureaucrat grade " << bc.getGrade();
	return os;
}
