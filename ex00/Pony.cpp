/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:08:03 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/24 16:00:56 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int Pony::counter = 0;

Pony::Pony( void ) {
	Pony::counter++;
	num = Pony::counter;
	std::cout<<"Pony №"<<num<<" rised!"<<std::endl;
}

Pony::~Pony( void ){
	std::cout<<"Pony №"<<num<<" gonna die!😈"<<std::endl;
	Pony::counter--;
}

void	Pony::call_rainbow( void ) const{
	std::cout<<"\033[48;2;248;12;18m    ";
	std::cout<<"\033[48;2;238;17;0m    ";
	std::cout<<"\033[48;2;255;51;17m    ";
	std::cout<<"\033[48;2;255;68;34m    ";
	std::cout<<"\033[48;2;255;102;68m    ";
	std::cout<<"\033[48;2;255;153;51m    ";
	std::cout<<"\033[48;2;254;174;45m    ";
	std::cout<<"\033[48;2;204;187;51m    ";
	std::cout<<"\033[48;2;208;195;16m    ";
	std::cout<<"\033[48;2;170;204;34m    ";
	std::cout<<"\033[48;2;105;208;37m    ";
	std::cout<<"\033[48;2;34;204;170m    ";
	std::cout<<"\033[48;2;18;189;185m    ";
	std::cout<<"\033[48;2;17;170;187m    ";
	std::cout<<"\033[48;2;68;68;221m    ";
	std::cout<<"\033[48;2;51;17;187m    ";
	std::cout<<"\033[48;2;59;12;189m    ";
	std::cout<<"\033[48;2;68;34;153m    ";
	std::cout<<"\033[0m Pony №"<<num<<" calling rainbow"<<std::endl;
	return ;
}