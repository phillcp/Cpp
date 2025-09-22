/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:18:04 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 17:23:53 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include <Brain.hpp>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
