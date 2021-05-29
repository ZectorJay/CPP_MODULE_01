/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:49:40 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 08:19:30 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_HPP
#define ZOMBIEHORDE_CLASS_HPP
#include <iostream>
#include "Zombie.class.hpp"
#include <sys/time.h>

class ZombieHorde{

public:

	ZombieHorde( int N );
	~ZombieHorde();
	
	void	announce( void ) ;

private:

	Zombie*	_horde;
	int _N;
	std::string _randomName( void );
	std::string	_randomType( void );

};

#endif