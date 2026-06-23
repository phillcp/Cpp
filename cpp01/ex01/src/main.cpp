/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:01:57 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/08 15:27:21 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>
#include <string>

int	main()
{
	Zombie *horde = zombieHorde(10, "Jujuca");
	for (int i = 0; i < 10; i++)
	{
		std::cout << "#1" << std::endl;
		horde[i].announce();
	}
	delete[] horde;
}
