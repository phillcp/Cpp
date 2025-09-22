/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:53:26 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/26 14:14:01 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"

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

	return 0;
}
