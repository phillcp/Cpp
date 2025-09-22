/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:31:59 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/14 18:08:25 by fheaton-         ###   ########.fr       */
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
