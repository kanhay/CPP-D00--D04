/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:35:36 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/07 10:04:06 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* z = newZombie("heapZombie");
    z->announce();
    delete z;
    std::cout << std::endl;
    randomChump("stackZombie");
}
