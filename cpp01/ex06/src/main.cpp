/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:43:02 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/23 11:13:28 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int main(int argc, char **argv){
	Harl h;
	if (argc == 2)
		h.complain(argv[1]);
	else
		h.complain("No argv[1]");
	return (0);
}
