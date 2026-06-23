/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:07:05 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 20:41:53 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap: virtual public ClapTrap{
	protected:
		static const int default_hp = 100;
		static const int default_ep = 50;
		static const int default_dmg = 20;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif
