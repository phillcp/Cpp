/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:22:22 by fheaton-          #+#    #+#             */
/*   Updated: 2026/06/08 16:06:30 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string replace_s1(std::string s, std::string s1, std::string s2)
{
	std::string ret = s;
	size_t pos = 0;

	long i;
	while((i = ret.find(s1, pos)) >= 0)
	{
		std::string tmp = ret.substr(0, i);
		tmp.append(s2);
		pos = tmp.length();
		tmp.append(ret.substr(i + s1.length(), ret.length()));
		ret = tmp;
	}
	return (ret);
}

int main(int argc, char **argv){
	if (argc != 4)
	{
		std::cout << "Wrong number of args" << std::endl;
		return (-1);
	}
	std::ifstream in;
	std::ofstream out;
	in.open(argv[1], std::ifstream::in);
	out.open(static_cast<std::string>(argv[1]).append(".replace").c_str(), std::ifstream::out);
	if (in.is_open() && out.is_open())
	{
		std::string content = std::string(std::istreambuf_iterator<char>(ifs), std::istreambuf_iterator<char>());
		ofs << replace_s1(content, static_cast<std::string>(argv[2]), static_cast<std::string>(argv[3]));
	}
	else if (in.is_open())
		std::cout << "Failed to open input file" << std::endl;
	else if (out.is_open())
		std::cout << "Failed to open output file" << std::endl;
	else
		std::cout << "Failed to open both files" << std::endl;
	out.close();
	in.close();
}
