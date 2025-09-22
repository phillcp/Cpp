/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:01:57 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/08 14:49:19 by fheaton-         ###   ########.fr       */
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

