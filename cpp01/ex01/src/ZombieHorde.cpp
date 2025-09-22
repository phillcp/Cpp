/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:01:06 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/15 03:23:35 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>
#include <string>

Zombie	*zombieHorde(int N, std::string name){
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
