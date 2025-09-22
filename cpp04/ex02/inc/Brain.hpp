/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:22:47 by fheaton-          #+#    #+#             */
/*   Updated: 2023/04/20 16:48:12 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Brain{
	private:
		std::string _ideas[100];
		int _curr_idea;
	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		void newIdea(const std::string& idea);
		void printIdeas() const;
};
