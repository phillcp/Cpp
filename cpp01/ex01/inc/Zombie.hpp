/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:31:59 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/15 03:24:05 by fheaton-         ###   ########.fr       */
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
		Zombie();
		~Zombie();
		void announce();
		void	setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
