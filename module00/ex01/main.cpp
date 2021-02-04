/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:30:56 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/04 23:20:18 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

void		get_input(std::string &cmd)
{
	std::cout << "\nEnter the command : ";
	std::cin >> cmd;
}

#include <typeinfo>

int			main(void)
{
	std::string	cmd;
	Contact		contact;

	show_banner();
	while (!std::cin.eof())
	{
		get_input(cmd);
		if (cmd == "EXIT" || cmd == "exit")
			exit(0);
		else if (cmd == "ADD" || cmd == "add")
			contact.add_contact();
		else if (cmd == "SEARCH" || cmd == "search")
			contact.search_contact();
		cmd = "";
	}
}
