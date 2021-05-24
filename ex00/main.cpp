/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:10:43 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/24 14:55:33 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void	PonyOnTheStack( void ){
	Pony PinkiePie[10];
	
	for (int i = 0; i < 20; i++)
		PinkiePie->call_rainbow(i);
	return ;
}

static void	PonyOnTheHeap( void ){
	Pony *Fluttershy = new Pony[10];

	for (int i = 0; i < 20; i++)
		Fluttershy->call_rainbow(i);
	return ;
}

int main(){
	PonyOnTheStack();
	PonyOnTheHeap();
	return (0);
}