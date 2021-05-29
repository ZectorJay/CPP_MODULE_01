/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:02:48 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 13:09:42 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main(){
	Weapon new_one;
	const std::string &type = new_one.getType();
	std::cout<<new_one.getType()<<std::endl;
}