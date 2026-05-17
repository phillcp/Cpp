/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:45:41 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/17 22:13:49 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int _val;
		static const int _fract = 8;
	public:
		Fixed();
		Fixed(const Fixed& original);
		~Fixed();

		Fixed &operator=(const Fixed& original);
		int getRawBits( void ) const;
		void setRawBits(int const rawBits );
};

#endif
