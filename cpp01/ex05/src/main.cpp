/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:27:05 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 19:45:37 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
	Harl h;
	h.complain("debug");
	h.complain("info");
	h.complain("warning");
	h.complain("error");
	return 0;
}
