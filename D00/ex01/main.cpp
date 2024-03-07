/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:47:17 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/02 11:31:52 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(){
    Phonebook ph;
    while(1){
        std::string cmd;
        std::cout << "Enter a Command: ADD, SEARCH or EXIT."<< std::endl;
        getline(std::cin, cmd);
        if(std::cin.eof())return (1);
        if(cmd == "ADD"){
            ph.addcontact();
        }
        else if(cmd == "SEARCH"){
            ph.displayPhonebook();
            std::string _index;
            std::cout << "Enter the index of the contact you want to display. Choose from 1 to 8." << std::endl;
            std::cin >> _index;
            if(std::cin.eof())return(1);
            std::cin.ignore();
            int i = 0;
            while (isdigit(_index[i]))
                 i++;
            if(_index[i]){
                std::cout << "invalid input" << std::endl;
                continue ;
            }
            else{
                int j = atoi(_index.c_str());
                ph.searchcontact(j);
            }
        }
        else if(cmd == "EXIT"){
            std::cout << "You are exiting." << std::endl;
            return (0);
        }
        else
            std::cout << "Invalid command" << std::endl;
    }
    
}