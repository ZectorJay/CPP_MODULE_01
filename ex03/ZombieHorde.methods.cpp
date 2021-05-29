/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.methods.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:21:49 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 08:30:31 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"

ZombieHorde::ZombieHorde ( int N ) : _N(N){
	if (N <= 0){
		std::cout<<"\033[1;38;2;200;0;0m";
		std::cout<<"Can't create army with less than 1 zombie\033[0m"<<std::endl;
	}
	else{
		this->_horde = new Zombie[N];
		for (int i = 0; i < N; i++){
			_horde[i].set_name( this->_randomName() );
			_horde[i].set_type( this->_randomType() );
		}
	}
}

void	ZombieHorde::announce( void ) {
	for (int i = 0; i < this->_N; i++)
		this->_horde[i].announce();		
}

ZombieHorde::~ZombieHorde ( void ){
	delete [] _horde;
	std::cout<<"\033[1;3;38;2;200;100;100mZOMBIE ARMY RETREAT!\033[0m"<<std::endl;
}

std::string	ZombieHorde::_randomType( void ){
	struct timeval timer;

	gettimeofday(&timer, NULL);
	srand(timer.tv_usec);
	std::string types[] = {
		"Warrior",
		"Priest",
		"Rogue",
		"Warlock",
		"Paladin",
		"Druid",
		"Shaman",
		"Hunter",
		"Mage"
	};
	int i = rand() % 9;
	return (types[i]);
}

std::string	ZombieHorde::_randomName( void ){
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
	return (names[i]);
}