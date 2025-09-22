/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:31:03 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/04 16:24:43 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <Claptrap.hpp>

class Fragtrap: virtual public Claptrap{
	private:
		Fragtrap();
	protected:
		static const int default_hp = 100;
		static const int default_ep = 100;
		static const int default_dmg = 30;
	public:
		Fragtrap(std::string name);
		~Fragtrap();
		void highFivesGuys();
		void attack(const std::string& target);
};

#endif
