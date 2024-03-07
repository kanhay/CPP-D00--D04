/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:19:18 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/14 17:36:35 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    name = "Someone";
    hitPoints = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap default constructor called for " << getName() <<  std::endl;
}
FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj){
    std::cout << "FragTrap copy constructor called " << getName() << std::endl;
    *this = obj;
}
FragTrap& FragTrap::operator=(const FragTrap &obj){
    std::cout << "FragTrap copy assignment operator called " << getName() << std::endl;
    if (this != &obj)
        ClapTrap::operator=(obj);
    return (*this);
}
FragTrap::FragTrap(const std::string& n):ClapTrap(n){
    std::cout << "FragTrap parameterized constructor called for " << getName() << std::endl;
    hitPoints = 100;
    energy = 100;
    damage = 30;
}

void FragTrap::highFivesGuys(void){
    if (hitPoints > 0)
        std::cout << "Give me a hi 5 ✋" << std::endl;
    else
        std::cout << "🤕" << std::endl;
}

FragTrap::~FragTrap(){
     std::cout << "FragTrap destructor called for " << getName() << std::endl;
}
