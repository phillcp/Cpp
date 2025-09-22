/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:31:03 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/26 14:13:55 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <Claptrap.hpp>

class Fragtrap: public Claptrap{
	private:
		Fragtrap();
	public:
		Fragtrap(std::string name);
		~Fragtrap();
		void highFivesGuys();
		void attack(const std::string& target);
};

#endif
