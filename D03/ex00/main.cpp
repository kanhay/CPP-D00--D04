/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:50:45 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/14 11:56:57 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap ob1;
    ClapTrap ob2("Nate");
    ClapTrap ob3(ob1);

    ob1.attack(ob2.getName());
    ob1.beRepaired(4);
    ob3.takeDamage(8);
}
