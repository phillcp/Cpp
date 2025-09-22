/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:57:35 by fheaton-          #+#    #+#             */
/*   Updated: 2023/02/08 17:06:05 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		~WrongCat();

		void makeSound() const;
};

#endif
