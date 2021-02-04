/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhan <yuhan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:39:48 by yuhan             #+#    #+#             */
/*   Updated: 2021/02/04 22:32:55 by yuhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

Person		Person::add_information(void)
{
	std::cout << "Enter the first name : ";
	std::cin >> firstname;
	std::cout << "Enter the last name : ";
	std::cin >> lastname;
	std::cout << "Enter the nickname : ";
	std::cin >> nickname;
	std::cout << "Enter the login : ";
	std::cin >> login;
	std::cout << "Enter the postal : ";
	std::cin >> postal;
	std::cout << "Enter the email : ";
	std::cin >> email;
	std::cout << "Enter the phone number : ";
	std::cin >> phone_number;
	std::cout << "Enter the birthday : ";
	std::cin >> birthday;
	std::cout << "Enter the favorite meal : ";
	std::cin >> favorite_meal;
	std::cout << "Enter the underwear : ";
	std::cin >> underwear;
	std::cout << "Enter the secret : ";
	std::cin >> secret;
	return (*this);
}

void		Person::get_information(void)
{
	std::cout << "The first name : " << firstname << '\n';
	std::cout << "The last name : " << lastname << '\n';
	std::cout << "The nickname : " << nickname << '\n';
	std::cout << "The login : " << login << '\n';
	std::cout << "The postal : " << postal << '\n';
	std::cout << "The email : " << email << '\n';
	std::cout << "The phone number : " << phone_number << '\n';
	std::cout << "The birthday : " << birthday << '\n';
	std::cout << "The favorite meal : " << favorite_meal << '\n';
	std::cout << "The underwear : " << underwear << '\n';
	std::cout << "The secret : " << secret << '\n';
}

std::string	Person::get_firstname(void)
{
	return (firstname);
}

std::string	Person::get_lastname(void)
{
	return (lastname);
}

std::string	Person::get_nickname(void)
{
	return (nickname);
}

std::string	Person::get_login(void)
{
	return (login);
}

std::string	Person::get_postal(void)
{
	return (postal);
}

std::string	Person::get_email(void)
{
	return (email);
}

std::string	Person::get_phone_number(void)
{
	return (phone_number);
}

std::string	Person::get_birthday(void)
{
	return (birthday);
}

std::string	Person::get_favorite_meal(void)
{
	return (favorite_meal);
}

std::string	Person::get_underwear(void)
{
	return (underwear);
}

std::string	Person::get_secret(void)
{
	return (secret);
}

std::string	Person::get_firstname_ten(void)
{
	std::string ten;
	if (firstname.length() <= 10)
		return (std::string().append(10 - firstname.length(), ' ') + firstname);
	ten = firstname.substr(0, 9);
	ten.append(1, '.');
	return (ten);
}

std::string	Person::get_lastname_ten(void)
{
	std::string ten;

	if (lastname.length() <= 10)
		return (std::string().append(10 - lastname.length(), ' ') + lastname);
	ten = lastname.substr(0, 9);
	ten.append(1, '.');
	return (ten);
}

std::string	Person::get_nickname_ten(void)
{
	std::string ten;

	if (nickname.length() <= 10)
		return (std::string().append(10 - nickname.length(), ' ') + nickname);
	ten = nickname.substr(0, 9);
	ten.append(1, '.');
	return (ten);
}

