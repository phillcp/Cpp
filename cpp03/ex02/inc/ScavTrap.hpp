/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:07:05 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 19:25:51 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap: public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif
