/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:05:31 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/24 14:45:26 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony{

public:

	static int	counter;

	Pony( void );
	~Pony( void );
	void call_rainbow( int i ) const;
};

int Pony::counter = 0;

#endif