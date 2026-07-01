/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:54:23 by fiheaton          #+#    #+#             */
/*   Updated: 2026/07/01 18:16:04 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeSign;
		const int _gradeExec;
	public:
		Form();
		Form(std::string name, int SignGrade, int ExecGrade);
		Form(const Form& other);
		~Form();
		Form& operator=(const Form& original);
		
		const std::string getName() const;
		bool getIsSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(Bureaucrat& signer);

		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& fm);

#endif
