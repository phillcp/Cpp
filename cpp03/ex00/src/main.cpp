/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:53:26 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/23 16:04:28 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	Claptrap a ("Clap1");
	Claptrap b ("Clap2");

	a.attack("Clap2");
	b.takeDamage(0);
	a.beRepaired(5);

	std::cout << std::endl;

	return 0;
}
