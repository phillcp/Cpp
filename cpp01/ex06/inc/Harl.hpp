/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:04:28 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/24 13:46:39 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl{
	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};

#endif
