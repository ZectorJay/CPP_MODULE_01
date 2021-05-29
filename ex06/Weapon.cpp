/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:59:19 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 13:12:08 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::~Weapon(){}

const std::string & Weapon::getType( void ) { return (_type); }

void	Weapon::setType( std::string str) { _type = str; }