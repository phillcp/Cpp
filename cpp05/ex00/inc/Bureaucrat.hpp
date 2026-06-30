/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:41:46 by fiheaton          #+#    #+#             */
/*   Updated: 2026/06/30 17:19:17 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& original);
		std::string& operator<<(std::ostream& os, const Bureaucrat& bc);
		
		int getGrade() const;
		const std::string getName() const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc);

#endif
