/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:31:03 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/18 19:26:09 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <ClapTrap.hpp>

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys();
		void attack(const std::string& target);
};

#endif
