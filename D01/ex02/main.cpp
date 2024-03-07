/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:47:35 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/01 20:47:35 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string* ptr = &var;
    std::string& ref = var;

    std::cout << &var <<std::endl << ptr << std::endl << &ref << std::endl;
    std::cout <<std::endl;
    std::cout << var <<std::endl << *ptr << std::endl << ref << std::endl;
}
