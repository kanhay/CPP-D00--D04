/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:30:41 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/06 17:58:26 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(const std::string& wtype):type(wtype){
    std::cout << "Weapon constructor called" << std::endl; 
}

const std::string& Weapon::getType() const{ 
    return(type);
}

void Weapon::setType(const std::string& newtype){
    type = newtype;
}

Weapon::~Weapon(){
    std::cout << "Weapon destructor called" << std::endl;
}
