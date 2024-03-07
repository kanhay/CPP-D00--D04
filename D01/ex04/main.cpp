/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:08:58 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/08 12:17:36 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rep.hpp"


int main(int ac, char **av)
{
    if (ac != 4){
        std::cout << "Incorrect numder of arguments\n" << "Expected format: " << av[0] << " filename s1 s2" << std::endl; 
        return(1);
    }   
    ft_replace(av[1], av[2], av[3]);
    return (0);
}
