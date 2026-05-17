/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:45:53 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/17 22:53:14 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int _val;
		static const int _fract = 8;
	public:
		Fixed();
		Fixed(const Fixed &original);
		Fixed(const int fPoint);
		Fixed(const float fPoint);
		~Fixed();

		Fixed& operator=(Fixed const &original);

		bool operator<(const Fixed &original) const;
		bool operator>(const Fixed &original) const;
		bool operator>=(const Fixed &original) const;
		bool operator<=(const Fixed &original) const;
		bool operator==(const Fixed &original) const;
		bool operator!=(const Fixed &original) const;

		Fixed operator+(const Fixed &original) const;
		Fixed operator-(const Fixed &original) const;
		Fixed operator*(const Fixed &original) const;
		Fixed operator/(const Fixed &original) const;

		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat() const;
		int toInt() const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
