/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:50:45 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/14 14:38:00 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap ob1;
    ScavTrap ob2("Nate");
    ScavTrap ob3(ob1);

    ob1.attack(ob2.getName());
    ob1.beRepaired(4);
    ob3.takeDamage(8);
    ob2.guardGate();
}
