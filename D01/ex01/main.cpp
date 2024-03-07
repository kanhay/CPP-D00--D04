/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:58:54 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/08 15:14:37 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 4;
    Zombie* z = zombieHorde(N, "Max");
    if (!z)
        return (1);
    for (int i = 0; i < N; i++)
        z[i].announce();
    delete[] z;
    return (0);
}
