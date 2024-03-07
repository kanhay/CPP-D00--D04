/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:40:47 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/02 17:40:47 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    std::cout << "Harl constructor called" << std::endl;
}
Harl::~Harl(){
    std::cout << "Harl destructor called" << std::endl;
}
void    Harl::debug(void)
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::error(void)
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level )
{
    void(Harl::*funcptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int index = (level == "DEBUG") ? 0 :
                (level == "INFO") ? 1 :
                (level == "WARNING") ? 2 :
                (level == "ERROR") ? 3 : 4;
                
    switch(index){
        case 0:
            (this->*funcptr[0])();
            break;
        case 1:
            (this->*funcptr[1])();
            break;
        case 2:
            (this->*funcptr[2])();
            break;
        case 3:
            (this->*funcptr[3])();
            break;
        default:
            std::cout << "Unknown level" << std::endl;
    }
}
