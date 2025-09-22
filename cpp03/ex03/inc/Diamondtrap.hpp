/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:29:27 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/04 16:24:23 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>

#include "Fragtrap.hpp"
#include "Scavtrap.hpp"

class Diamondtrap: public Scavtrap, public Fragtrap
{
	private:
		std::string _name;
		Diamondtrap();
	public:
		Diamondtrap(std::string name);
		~Diamondtrap();
		void attack(const std::string& target);
		void whoAmI();
};

#endif
