/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:54:43 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 18:18:29 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{
	private:
		std::string _name;
		Weapon& _weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack() const;
};

#endif
