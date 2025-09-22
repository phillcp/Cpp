/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:45:37 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/14 18:08:30 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <string>

void	randomChump(std::string name){
	Zombie(name).announce();
}
