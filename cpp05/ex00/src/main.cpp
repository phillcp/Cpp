/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:58:14 by fiheaton          #+#    #+#             */
/*   Updated: 2026/06/30 16:31:15 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a ("Toze", 151);
	}
	catch (std::string & e)
	{
		std::cout << e << std::endl;
	}
	try
	{
		Bureaucrat b ("Toze2", 0);
	}
	catch (std::string& e)
	{
		std::cout << e << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat c ("Toze3", 1);
	Bureaucrat d ("Toze4", 150);
	std::cout << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << std::endl;

	return 0;
}
