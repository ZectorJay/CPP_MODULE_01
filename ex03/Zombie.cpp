/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:54:27 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 08:00:21 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie() {}

Zombie::Zombie ( std::string name, std::string type ) : _name(name), _type(type){
	std::cout<<"\033[1;38;2;85;107;47mZombie ";
	std::cout<<"\033[1;38;2;72;61;130m"<<name<<"\033[1;38;2;85;107;47m";
	std::cout<<" arise\033[0m "<<std::endl;
};

Zombie::~Zombie ( void ){
	std::cout<<"💀 Zombie \033[1;38;2;72;61;130m"<<this->_name;
	std::cout<<"\033[0m died 💀 R✞P"<<std::endl;
}

void		Zombie::set_type( std::string type ){
	this->_type = type;
};

void		Zombie::set_name( std::string name ){
	this->_name = name;
};

void	Zombie::announce ( void ) const {
	struct timeval	timer;

	gettimeofday(&timer, NULL);
	srand(timer.tv_usec);
	int	i = rand() % 3 + 1;
	std::cout<<"\033[1;38;2;200;0;0m";
	std::cout<<this->_name<<" ("<<this->_type<<"):";
	std::cout<<"\033[1;3;38;2;165;42;42m ";
	if (i == 1)
		std::cout<<"BrAaAaIin!!!\033[0m"<<std::endl;
	else if (i == 2)
		std::cout<<"Graaaaawrrr!!!\033[0m"<<std::endl;
	else if (i == 3)
		std::cout<<"Gmmmlmrmrgmg!!!\033[0m"<<std::endl;
}