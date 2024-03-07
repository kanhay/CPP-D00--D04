/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:40:51 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/06 17:57:57 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& playerName):name(playerName), weapon(NULL){
    std::cout << "HumanB constructor called" << std::endl;
}

void HumanB::setWeapon(Weapon& wp){
    weapon = &wp;
}

void HumanB::attack() const{
    if (!weapon)
        std::cout << name << " don't have a weapon " << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;   
}
HumanB::~HumanB(){
    std::cout << "HumanB destructor called" << std::endl;
}
