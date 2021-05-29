/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:12:45 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 08:28:19 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"
#include <iostream>

void	ZombieInit( void ){
	ZombieHorde horde(5);
	horde.announce();
	return ;
}

int main(){
	ZombieInit();
	while (1){}
	return (0);
}