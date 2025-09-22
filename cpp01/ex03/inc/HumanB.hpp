/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:38:22 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 18:16:46 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon& wep);
};

#endif
