/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:01:33 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/01 13:01:33 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(){};
Phonebook::~Phonebook(){};
void Phonebook::addcontact(){
    if (index == 8)
        index = 0;
    Contact temp;
    temp.newcontact();
    if (!temp.checkContactInput()){
        contacts[index] = temp;
        index++;
        std::cout << "Contact added successfully" << std::endl;}
}
void Phonebook::displayPhonebook() const{
    int i = 0;
    while(i < 8){
        contacts[i].displayContact(i + 1);
        i++;
        }
}
void Phonebook::searchcontact(int i)const{
    if(i < 1 || i > 8){
        std::cout << "Invalid input : The index " << i << " is out of range." << std::endl;
        return;}
    i--;
    contacts[i].displayinfo(i);
}

int Phonebook::index = 0;
