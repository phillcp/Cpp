/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:21:47 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 16:48:57 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		virtual ~Cat();

		void newIdea(const std::string& idea);
		void printIdeas() const;
		void makeSound() const;
};

#endif
