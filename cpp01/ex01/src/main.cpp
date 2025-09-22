/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:01:57 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/15 03:25:01 by fheaton-         ###   ########.fr       */
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
