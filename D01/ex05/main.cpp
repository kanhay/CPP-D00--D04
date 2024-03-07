/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:40:35 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/08 12:30:41 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Incorrect number of arguments\n" << std::endl; 
        return(1);
    }
    Harl h;
    h.complain(av[1]);
    return (0);
}
