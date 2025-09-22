/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:04:28 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 22:42:59 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <algorithm>

class Harl{
	private:
		int lvl;
		std::string lvls[4];
		void (Harl::*comp[4])() const;
		void debug( void ) const;
		void info( void ) const;
		void warning( void ) const;
		void error( void ) const;
	public:
		Harl(std::string level);
		~Harl();
		void complain( std::string level );
};

#endif
