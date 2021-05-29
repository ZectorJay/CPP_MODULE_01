/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:12:45 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/28 03:40:59 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.class.hpp"
#include <iostream>

void	manual_init_zombie( void ){
	ZombieEvent new_event;

	new_event.SetZombieType("Warrior");
	Zombie *vasya = new_event.newZombie("Vasya");
	vasya->announce();
	new_event.SetZombieType("Mage");
	Zombie *petya = new_event.newZombie("Petya");
	petya->announce();
	new_event.SetZombieType("Priest");
	Zombie *vika = new_event.newZombie("Vika");
	vika->announce();
	delete vika;
	delete petya;
	delete vasya;
	return ;
}

void	random_zombie_init( void ){
	ZombieEvent new_event;

	new_event.SetZombieType("Crazy minions");
	Zombie* random1 = new_event.randomChump();
	random1->announce();
	Zombie* random2 = new_event.randomChump();
	random2->announce();
	Zombie* random3 = new_event.randomChump();
	random3->announce();
	Zombie* random4 = new_event.randomChump();
	random4->announce();

	delete random1;
	delete random2;
	delete random3;
	delete random4;
	return ;
}

int main(){
	manual_init_zombie();
	std::cout<<"\n\n\n\n\n"<<std::endl;
	random_zombie_init();
	return (0);
}