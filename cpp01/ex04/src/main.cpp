/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:22:22 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/23 11:27:54 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string replace_string(std::string buff, std::string old_s, std::string new_s)
{
	size_t pos = 0;
	size_t i;

	if (old_s.empty())
		return (buff);
	while ((i = buff.find(old_s, pos)) != std::string::npos)
	{
		buff.erase(i, old_s.length());
		buff.insert(i, new_s);
		pos = i + new_s.length();
	}
	return (buff);
}

int main(int argc, char **argv){
	if (argc != 4)
	{
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}
	std::string file = argv[1];
	std::string old_s = argv[2];
	std::string new_s = argv[3];
	std::ifstream in;
	std::ofstream out;
	in.open(argv[1]);
	if (in.is_open())
	{
		out.open((file.append(".replace")).c_str());
		if (out.is_open())
		{
			std::string buff = std::string(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
			out << replace_string(buff, old_s, new_s);
		}
		else
		{
			std::cout << "Failed to create/open output file" << std::endl;
			in.close();
			return (1);
		}
	}
	else
	{
		std::cout << "Failed to open input file" << std::endl;
		return (1);
	}
	out.close();
	in.close();
	return (0);
}
