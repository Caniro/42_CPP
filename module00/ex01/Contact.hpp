/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 05:55:18 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/04 22:38:26 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Phonebook.hpp"
# include "Person.hpp"

class Contact
{
private:
	int			idx;
	Person		person[8];
public:
	void		add_contact(void);
	void		display_contact(void);
	void		search_contact(void);
	int			get_index(void);
};

#endif
