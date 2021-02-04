/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:07:36 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/04 23:24:48 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::add_contact(void)
{
	if (idx >= 8)
	{
		std::cout << "The contact is full.\n";
		return ;
	}
	person[idx].add_information();
	idx++;
}

void		Contact::display_contact(void)
{
	if (idx == 0)
	{
		std::cout << "Please add a person first.\n";
		return ;
	}
	std::cout << "|     Index|First name| Last name|  Nickname|\n";
	for (int i = 0; i < idx; ++i)
	{
		std::cout << "|         " << i << '|';
		std::cout << person[i].get_firstname_ten() << '|';
		std::cout << person[i].get_lastname_ten() << '|';
		std::cout << person[i].get_nickname_ten() << "|\n";
	}
}

void		Contact::search_contact(void)
{
	int			i;

	display_contact();
	if (idx == 0)
		return ;
	i = -1;
	while ((i < 0 || i > 7) && !std::cin.eof())
	{
		std::cout << "Enter the index to describe detail(0 to 8) : ";
		std::cin >> i;
		if (std::cin.fail())
		{
			std::cout << "Please enter an integer...\n";
			std::cin.clear();
			std::cin.ignore(INT32_MAX, '\n');
			i = -1;
		}
	}
	if (std::cin.eof())
		return ;
	if (i >= idx)
		std::cout << "Oh my god... there is no person there...\n" ;
	else
		person[i].get_information();
}

int			Contact::get_index(void)
{
	return (idx);
}
