/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:53:26 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 19:38:47 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a ("TheClap");
	ClapTrap b ("TheTrap");

	a.attack("Tony");
	b.takeDamage(5);
	b.beRepaired(5);

	std::cout << std::endl;

	return 0;
}
