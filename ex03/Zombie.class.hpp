/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:36:24 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/29 07:59:29 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
#include <iostream>
#include <sys/time.h>

class Zombie{
	
public:
	
	Zombie();
	Zombie(	std::string name, std::string type );
	~Zombie();
	void	announce( void ) const;
	void	set_type( std::string type );
	void	set_name ( std::string name );

private:
	
	std::string _name;
	std::string _type;
};

#endif