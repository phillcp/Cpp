/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:31:59 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/08 15:27:07 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
