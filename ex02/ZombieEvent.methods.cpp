/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.methods.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:21:49 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/28 03:21:22 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.class.hpp"

ZombieEvent::ZombieEvent ( void ) {}

ZombieEvent::~ZombieEvent ( void ){
	std::cout<<"\033[1;3;38;2;200;100;100mZOMBIE ARMY RETREAT!"<<std::endl;
}

void		ZombieEvent::SetZombieType ( std::string type){
	this->_type = type;
}

Zombie*		ZombieEvent::newZombie ( std::string name ){
	Zombie *new_one = new Zombie(name, this->_type);
	return (new_one);
}

Zombie*		ZombieEvent::randomChump( void ){
	struct timeval timer;

	gettimeofday(&timer, NULL);
	srand(timer.tv_usec);
	std::string names[] = {
		"Megan Fox",
		"Chuck Norris",
		"Robocop",
		"Tinki-winky",
		"Dipsi",
		"Lyalya",
		"Po",
		"Naruto",
		"Sasuke"
	};
	int i = rand() % 9;
	Zombie* new_one = new Zombie(names[i], this->_type);
	return (new_one);
}