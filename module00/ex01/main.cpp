/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:30:56 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/04 21:46:27 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

void	get_input(std::string &cmd)
{
	std::cout << "Enter the command : ";
	std::cin >> cmd;
}

int		main(void)
{
	std::string	cmd;
	Contact		contact;

	while (1)
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
