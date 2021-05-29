/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:16:32 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 09:24:03 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string	brain = "HI THIS IS BRAIN";
	std::string *brainp = &brain;
	std::string &brainr = brain;

	std::cout<<"\033[1;38;2;200;0;0mLOOK, THIS IS POINTER - \033[0m";
	std::cout<<*brainp<<std::endl;
	std::cout<<"\033[1;38;2;0;200;0mLOOK, THIS IS REFERENCE - \033[0m";
	std::cout<<brainr<<std::endl;
}