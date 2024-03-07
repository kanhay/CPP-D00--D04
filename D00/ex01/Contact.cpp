/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:44:26 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/01 16:08:09 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};
void Contact::newcontact(){
    std::cout << "Enter the contact's first name" << std::endl;
    std::getline(std::cin >> std::ws, firstName);
    if(std::cin.eof())exit(1);
    std::cout << "Enter the contact's last name" << std::endl;
    std::getline(std::cin >> std::ws, lastName);
    if(std::cin.eof())exit(1);
    std::cout << "Enter the contact's nickname" << std::endl;
    std::getline(std::cin >> std::ws, nickname);
    if(std::cin.eof())exit(1);
    std::cout << "Enter the contact's phone number" << std::endl;
    std::getline(std::cin >> std::ws, phoneNumber);
    if(std::cin.eof())exit(1);
    std::cout << "Enter the contact's darket secret" << std::endl;
    std::getline(std::cin >> std::ws, darkestSecret);
    if(std::cin.eof())exit(1);
}
int Contact::checkContactInput() const{
    if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty()){
        std::cout << "Error: all the fields must be filled" << std::endl;
        return(1);
    }
    if ((firstName.find("\t") != std::string::npos) || (lastName.find("\t") != std::string::npos) ||\
     (nickname.find("\t") != std::string::npos) || (phoneNumber.find("\t") != std::string::npos) ||\
      (darkestSecret.find("\t") != std::string::npos))
      {
        std::cout << "Invalid input; tabulation is not accepted" << std::endl;
        return (1);
      }
    int i = 0;
    while(isdigit(phoneNumber[i]))
        i++;
    if(phoneNumber[i]){
        std::cout << "Invalid input related to the phone number" << std::endl;
        return(1);
    }
    return (0);
}
void Contact::displayContact(const int i) const{ 
    if(!firstName.empty()){
        std::cout << std::right << std::setw(10) << "Index" << "|";
        std::cout << std::right << std::setw(10) << "First name" << "|";
        std::cout << std::right << std::setw(10) << "Last name" << "|";
        std::cout << std::right << std::setw(10) << "Nickname" << std::endl;;
        std::cout << std::right << std::setw(10) << i << "|";
        if (firstName.length() <= 10)
            std::cout << std::right << std::setw(10) << firstName << "|";
        else
            std::cout << firstName.substr(0, 9) << "." << "|";
        if (lastName.length() <= 10)
            std::cout << std::right << std::setw(10) << lastName << "|";
        else
            std::cout << lastName.substr(0, 9) << "." << "|";
        if (nickname.length() <= 10)
            std::cout << std::right << std::setw(10) << nickname << "|";
        else
            std::cout << nickname.substr(0, 9) << ".";
        std::cout << std::endl;
    }
}
void    Contact::displayinfo(const int i) const{
    if(firstName.empty())
        std::cout << "No contact info in index " << i + 1 << std::endl;
    else{
        std::cout << firstName << std::endl << lastName << std::endl << nickname << std::endl << phoneNumber << std::endl << darkestSecret << std::endl;
    }
}