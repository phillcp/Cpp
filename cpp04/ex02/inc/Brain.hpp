/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:22:47 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/19 14:46:57 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Brain{
	private:
		std::string _ideas[100];
		int _ideanbr;
	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		void newIdea(const std::string& idea);
		void printIdeas() const;
};
