/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:07:36 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/04 22:32:35 by yuhan            ###   ########.fr       */
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
	int			idx;

	display_contact();
	idx = -1;
	while (idx < 0 || idx > 7)
	{
		std::cout << "Enter the index to describe detail : ";
		std::cin >> idx;
	}
	person[idx].get_information();
}

int			Contact::get_index(void)
{
	return (idx);
}
