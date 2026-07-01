/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:58:14 by fiheaton          #+#    #+#             */
/*   Updated: 2026/07/01 18:21:00 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try{
		Form a ("Toze", 151, 1);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form b ("Toze2", 0, 1);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try{
		Form a ("Toze", 1, 151);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form b ("Toze2", 1, 0);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat a ("Toze1", 150);
	Bureaucrat b ("Toze2", 1);
	Form c ("Form1", 1, 1);
	Form d ("Form2", 10, 10);
	std::cout << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << std::endl;
	a.SignForm(c);
	std::cout << c.getIsSigned() << std::endl;
	b.SignForm(c);
	std::cout << c.getIsSigned() << std::endl;
	std::cout << std::endl;
	std::cout << d.getIsSigned() << std::endl;
	d = c;
	std::cout << d.getIsSigned() << std::endl;
	std::cout << std::endl;
	
	return 0;
}
