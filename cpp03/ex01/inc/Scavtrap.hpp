/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:07:05 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/26 12:52:15 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <Claptrap.hpp>

class Scavtrap: public Claptrap{
	private:
		Scavtrap();
	public:
		Scavtrap(std::string name);
		~Scavtrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif
