/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:52:00 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 12:38:43 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){}

Human::~Human(){}

const std::string Human::identify( void ) const{
	return (this->_brain.identify());
}

const Brain & Human::getBrain(){
	return (_brain);
}