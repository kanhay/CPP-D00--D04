/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:50:39 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/14 17:10:22 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Someone"), hitPoints(10), energy(10), damage(0){
    std::cout << "ClapTrap default constructor called for " << getName() <<  std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &obj){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &obj){
        name = obj.name;
        hitPoints = obj.hitPoints;
        energy = obj.energy;
        damage = obj.damage;    
    }
    return (*this);
}

ClapTrap::ClapTrap(const std::string& n) : name(n){
        std::cout << "ClapTrap parameterized constructor called for " << getName() << std::endl;
        hitPoints = 10;
        energy = 10;
        damage = 0;
}

void ClapTrap::attack(const std::string& target){
    if (hitPoints > 0 && energy > 0){
        energy--;
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << damage << " points of damage!" << std::endl;
    }
    else 
        std::cout << "ClapTrap " << name << " cannot attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (hitPoints > 0){
        hitPoints = (hitPoints < amount) ? 0 : (hitPoints - amount);
        std::cout << "ClapTrap " << name << " loses " << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << "cannot take damage because he has no hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energy > 0 && hitPoints > 0){
        energy--;
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repairs itself" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " cannot repair itself" << std::endl;
}

const std::string& ClapTrap::getName()const{
    return (name);
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called for " << getName() << std::endl;
}
