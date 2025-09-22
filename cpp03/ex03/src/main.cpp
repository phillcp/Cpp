/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:53:26 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/04 16:25:47 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
#include "Diamondtrap.hpp"

int main()
{
	Claptrap a ("Clap1");
	a.attack("Clap2");
	a.takeDamage(5);
	a.beRepaired(5);

	std::cout << std::endl;

	Scavtrap b ("Scav1");
	b.attack("Scav2");
	b.takeDamage(20);
	b.beRepaired(20);
	b.guardGate();

	std::cout << std::endl;

	Fragtrap c ("Frag1");
	c.attack("Frag2");
	c.takeDamage(30);
	c.beRepaired(30);
	c.highFivesGuys();

	std::cout << std::endl;

	Diamondtrap d("Diamond1");
	d.attack("Diamond2");
	d.takeDamage(50);
	d.beRepaired(50);
	d.guardGate();
	d.highFivesGuys();
	d.whoAmI();

	std::cout << std::endl;

	return 0;
}
