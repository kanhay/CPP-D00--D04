/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:05:21 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/14 17:35:43 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    name = "Someone";
    hitPoints = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap default constructor called for " << getName() << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj){
    std::cout << "ScavTrap copy constructor called " << getName() << std::endl;
    *this = obj;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &obj){
    std::cout << "ScavTrap copy asignment operator called " << getName() << std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return (*this);
}
ScavTrap::ScavTrap(const std::string& n):ClapTrap(n){
    std::cout << "ScavTrap parameterized constructor called for " << getName() << std::endl;
    hitPoints = 100;
    energy = 50;
    damage = 20;
}

void ScavTrap::attack(const std::string& target){
    if (hitPoints > 0 && energy > 0){
        energy--;
        std::cout << "ScavTrap " << name << " attacks " << target << " causing " << damage << " points of damage!" << std::endl;
    }
    else 
        std::cout << "ScavTrap " << name << " cannot attack " << target << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << getName() << " is now in Gatekeeper mode" << std::endl;
}

ScavTrap::~ScavTrap(){
     std::cout << "ScavTrap destructor called for " << getName() << std::endl;
}
