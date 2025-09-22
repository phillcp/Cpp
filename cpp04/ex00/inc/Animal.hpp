/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:18:04 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 15:45:23 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
