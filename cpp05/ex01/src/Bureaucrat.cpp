/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:41:43 by fiheaton          #+#    #+#             */
/*   Updated: 2026/07/01 18:08:57 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade > 150){
		throw GradeTooHighException();
	}
	if (grade < 1){
		throw GradeTooLowException();
	}
	this->_grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original) : _name(original._name), _grade(original._grade){}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& original){
	if (this != &original)
		this->_grade = original.getGrade();
	return *this;
}



int	Bureaucrat::getGrade() const{
	return this->_grade;
}

const std::string	Bureaucrat::getName() const{
	return this->_name;
}

void	Bureaucrat::SignForm(Form& SignForm){
	try{
		SignForm.beSigned(*this);
	}
	catch (std::exception& e){
		std::cout << this->getName() << " couldn't sign " << SignForm.getName() << " because " << e.what() << std::endl;
	}
	std::cout << this->getName() << " signed " << SignForm.getName() << std::endl;
}

void	Bureaucrat::decrementGrade(){
	if (_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::incrementGrade(){
	if (_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}



const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high exception";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low exception";
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bc){
	os << bc.getName() << ", bureaucrat grade " << bc.getGrade();
	return os;
}
