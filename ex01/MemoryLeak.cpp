/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemoryLeak.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:24:29 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/24 16:26:44 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak(){
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int main(){
	memoryLeak();
	while (1)
	{}
	return (0);
}