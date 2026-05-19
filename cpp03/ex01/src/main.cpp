/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:53:26 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 19:16:33 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a ("TheClap");
	a.attack("Tony");
	a.takeDamage(5);
	a.beRepaired(5);

	std::cout << std::endl;

	ScavTrap b ("TheScav");
	b.attack("Kony");
	b.takeDamage(20);
	b.beRepaired(20);
	b.guardGate();

	std::cout << std::endl;

	return 0;
}
