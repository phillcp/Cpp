/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:41:43 by fiheaton          #+#    #+#             */
/*   Updated: 2026/05/19 16:57:55 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade > 150){
		throw std::invalid_argument( "Bureaucrat::GradeTooHighException" );
	}
	if (grade < 1){
		throw std::invalid_argument( "Bureaucrat::GradeTooLowException" );
	}		
	std::cout << "Bureaucrat constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

int Bureaucrat::getGrade(){
	return (this->_grade);
}

const std::string Bureaucrat::getName(){
	return (this->_name);
}
