/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:07:01 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/11 22:11:38 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <PhoneBook.hpp>
#include <utils.hpp>

static string ft_getline(string prompt)
{
	string input;

	std::cout << prompt;
	getline(std::cin, input);
	return (input);
}

static void	add(PhoneBook *book)
{
	string f_name, l_name, n_name, c_num, d_secret;

	f_name = ft_getline("Input contact's first name: ");
	if (!f_name.compare(""))
		throw std::invalid_argument("first name");
	l_name = ft_getline("Input contact's last Name: ");
	if (!l_name.compare(""))
		throw std::invalid_argument("last name");
	n_name = ft_getline("Input contact's nickname: ");
	if (!n_name.compare(""))
		throw std::invalid_argument("nickname");
	c_num = ft_getline("Input contact's number: ");
	if (!c_num.compare(""))
		throw std::invalid_argument("number");
	d_secret = ft_getline("Input contact's darkest secret: ");
	if (!d_secret.compare(""))
		throw std::invalid_argument("secret");
	(*book).add(f_name, l_name, n_name, c_num, d_secret);
}

int	main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;
	PhoneBook book;
	string in;
	while (std::cin)
	{
		std::cout << "PhoneBook: ";
		getline(std::cin, in);
		if (!in.compare("EXIT"))
			break;
		if (!in.compare("ADD"))
		{
			try
			{
				add(&book);
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << "Field cannot be empty." << std::endl;
			}
		}
		else if (!in.compare("SEARCH"))
		{
			if (book.getsize() == 0)
			{
				std::cout << "PhoneBook is empty.\n";
				continue;
			}
			book.printbook();
			in = ft_getline("Input contact index: ");
			if (!in.compare(""))
			{
				std::cout << "Input cannot be empty." << std::endl;
				continue;
			}
			try
			{
				int index = stoi((in.c_str()));
				if (!book.checkindex(index - 1))
				{
					std::cout << "Not a valid index." << std::endl;
					continue;
				}
				book.printcontact(index - 1);
			}
			catch(const std::exception& e)
			{
				std::cout << "Couldn't convert index to a number.\n";
			}
		}
		else if (std::cin)
			std::cout << "Wrong input, maybe chose one of these:\n\tADD\n\tSEARCH\n\tEXIT" << std::endl;
	}
	return (1);
}
