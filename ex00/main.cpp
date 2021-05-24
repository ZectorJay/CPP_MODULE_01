/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:10:43 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/24 15:27:41 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void	PonyOnTheStack( void ){
	Pony PinkiePie[10];
	
	for (int i = 0; i < Pony::counter; i++)
		PinkiePie[i].call_rainbow(i + 1);
	return ;
}

static void	PonyOnTheHeap( void ){
	Pony *Fluttershy = new Pony[10];

	for (int i = 0; i < Pony::counter; i++)
		Fluttershy[i].call_rainbow(i + 1);
	delete [] Fluttershy;
	std::cout<<"Leaving from PonyOnTheHeap"<<std::endl;
	return ;
}

int main(){
	PonyOnTheStack();
	std::cout<<"-------------------STACK HAS ENDED------------------"<<std::endl;
	PonyOnTheHeap();
	return (0);
}