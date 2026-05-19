/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:53:26 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 20:46:10 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

	FragTrap c ("TheFrag");
	c.attack("Lony");
	c.takeDamage(30);
	c.beRepaired(30);
	c.highFivesGuys();

	std::cout << std::endl;

	DiamondTrap d("TheDiamond");
	d.attack("Rony");
	d.takeDamage(50);
	d.beRepaired(50);
	d.guardGate();
	d.highFivesGuys();
	d.whoAmI();

	std::cout << std::endl;

	return 0;
}
