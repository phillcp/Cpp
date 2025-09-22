/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:43:02 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/18 22:28:14 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

std::string ltrim(const std::string &str){
	size_t i = str.find_first_not_of("\"");
	return (i == std::string::npos) ? "" : str.substr(i);
}

std::string rtrim(const std::string &str){
	size_t i = str.find_last_not_of("\"");
	return (i == std::string::npos) ? "" : str.substr(0, i + 1);
}

std::string cleanArgv(char *argv){
	std::string str = argv;
	return (rtrim(ltrim(str)));
}

void start(Harl h, std::string str){
	h.complain(str);
}

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Wrong number of args" << std::endl;
		return (-1);
	}
	std::string str = cleanArgv(argv[1]);
	start(Harl(str), str);
	return (1);
}
