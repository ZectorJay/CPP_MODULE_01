/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:57:29 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 13:11:16 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon{

public:
	

	Weapon();
	~Weapon();

	const std::string & getType ( void );
	void	setType ( std::string str);

private:

	std::string _type;

};


#endif