/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:43:34 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 18:18:26 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
	private:
		std::string _type;
	public:
		Weapon(std::string const type);
		~Weapon();
		std::string getType() const;
		void setType(std::string const type);
};

#endif
