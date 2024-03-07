/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 18:07:48 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/07 20:36:14 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string n);
    void announce(void);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif