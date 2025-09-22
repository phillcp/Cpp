/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:07:05 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/04 16:24:49 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <Claptrap.hpp>

class Scavtrap: virtual public Claptrap{
	private:
		Scavtrap();
	protected:
		static const int default_hp = 100;
		static const int default_ep = 50;
		static const int default_dmg = 20;
	public:
		Scavtrap(std::string name);
		~Scavtrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif
