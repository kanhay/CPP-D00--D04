/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:32:04 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/06 17:57:42 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& playerName, Weapon& wp):name(playerName), weapon(wp){
    std::cout << "HumanA constructor called" << std::endl;
}
void HumanA::attack() const{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;   
}
HumanA::~HumanA(){
    std::cout << "HumanA destructor called" << std::endl;
}
