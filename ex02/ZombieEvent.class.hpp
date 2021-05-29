/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:49:40 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/28 03:39:56 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CLASS_HPP
#define ZOMBIEEVENT_CLASS_HPP
#include <iostream>
#include "Zombie.class.hpp"
#include <sys/time.h>

class ZombieEvent{

public:

	ZombieEvent();
	~ZombieEvent();

	void	SetZombieType( std::string type );
	Zombie*	newZombie( std::string name );
	Zombie*	randomChump( void );

private:

	std::string	_type;

};

#endif