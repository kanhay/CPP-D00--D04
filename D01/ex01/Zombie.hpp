/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:26:57 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/08 15:09:46 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>


class Zombie{
    private:
    std::string name;
    public:
    Zombie();
    Zombie(std::string n);
    void announce( void );
    void setname(std::string n);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif