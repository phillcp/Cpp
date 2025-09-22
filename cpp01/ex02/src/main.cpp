/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:26:52 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/15 03:47:59 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){
	std::string brian = "HI THIS IS BRIAN";
	std::string *stringPTR = &brian;
	std::string &stringREF = brian;

	std::cout << "OG string address: " << &brian << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

	std::cout << std::endl << "OG string: " << brian << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
