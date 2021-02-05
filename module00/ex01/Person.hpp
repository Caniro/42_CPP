/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:35:22 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/05 12:48:03 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
# define PERSON_HPP

# include <iostream>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string postal;
	std::string email;
	std::string phone_number;
	std::string birthday;
	std::string favorite_meal;
	std::string underwear;
	std::string secret;
public:
	Person		add_information(void);
	void		get_information(void);
	std::string get_firstname(void);
	std::string get_lastname(void);
	std::string get_nickname(void);
	std::string get_login(void);
	std::string get_postal(void);
	std::string get_email(void);
	std::string get_phone_number(void);
	std::string get_birthday(void);
	std::string get_favorite_meal(void);
	std::string get_underwear(void);
	std::string get_secret(void);
	std::string get_firstname_ten(void);
	std::string get_lastname_ten(void);
	std::string get_nickname_ten(void);
};

#endif
