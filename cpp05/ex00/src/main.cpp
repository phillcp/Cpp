/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:58:14 by fiheaton          #+#    #+#             */
/*   Updated: 2026/05/19 17:01:15 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a ("Toze", 151);
	}
	catch (std::exception & e)
	{
		std::string out = e;
		std::cout << e << std::endl;
	}
	Bureaucrat b ("");

	a.attack("Tony");
	b.takeDamage(5);
	b.beRepaired(5);

	std::cout << std::endl;

	return 0;
}
