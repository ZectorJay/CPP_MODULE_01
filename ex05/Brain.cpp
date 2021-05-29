/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:36:14 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 11:45:13 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(){}

Brain::~Brain(){}

std::string Brain::identify( void ) const {
	std::stringstream address;
	address << this;
	return (address.str());
}