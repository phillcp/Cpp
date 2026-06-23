/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:01:57 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/08 15:27:09 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>
#include <string>

int	main()
{
	Zombie *z = newZombie("Jujuca");
	randomChump("André");
	z->announce();
	randomChump("Pinto");
	delete z;
}

