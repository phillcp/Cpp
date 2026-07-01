/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:58:07 by fiheaton          #+#    #+#             */
/*   Updated: 2026/07/01 18:23:23 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _gradeSign(150), _gradeExec(150){
	this->_isSigned = false;
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int SignGrade, int ExecGrade) : _name(name), _gradeSign(SignGrade), _gradeExec(ExecGrade){
	if (SignGrade > 150 || ExecGrade > 150){
		throw GradeTooHighException();
	}
	if (SignGrade < 1 || ExecGrade > 150){
		throw GradeTooLowException();
	}
	this->_isSigned = false;
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &original) : _name(original._name), _gradeSign(original._gradeSign), _gradeExec(original._gradeExec){}

Form::~Form(){
	std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& original){
	if (this != &original)
		this->_isSigned = original._isSigned;
	return *this;
}



const std::string Form::getName() const{
	return this->_name;
}

int Form::getGradeSign() const{
	return this->_gradeSign;
}

int Form::getGradeExec() const{
	return this->_gradeExec;
}

bool Form::getIsSigned() const{
	return this->_isSigned;
}



void Form::beSigned(Bureaucrat& signer){
	if (signer.getGrade() <= this->getGradeSign())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade too high exception";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade too low exception";
}

std::ostream& operator<<(std::ostream& os, const Form& fm){
	os << fm.getName() << ", Form | sign grade: " << fm.getGradeSign() << " | exec grade: " << fm.getGradeExec();
	return os;
}
