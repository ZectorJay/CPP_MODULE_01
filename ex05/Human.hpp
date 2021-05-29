/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:45:34 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 12:38:45 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>
# include "Brain.hpp"

class Human{

public:

	Human();
	~Human();
	const Brain & getBrain ( void );
	const std::string identify( void ) const;

private:

	Brain _brain;

};

#endif
