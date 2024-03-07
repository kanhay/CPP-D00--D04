/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:01:32 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/08 15:09:20 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    if (N <= 0){
        std::cout << "Invalid input related to N" << std::endl;
        return NULL;
    }
    Zombie* zombies = new Zombie[N]; 
    for(int i = 0; i < N; i++)
        zombies[i].setname(name);
    return (zombies);
}
