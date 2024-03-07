/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:32:05 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/01 11:32:05 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream> 
#include <cctype>

class Megaphone{
    private:
    std::string str;
    public:
    Megaphone(std::string s);
    void setString();
    std::string getString() const;
};

Megaphone::Megaphone(std::string s):str(s){}

void Megaphone::setString(){
    int i = 0;
    while(str[i]){
        str[i] = toupper(str[i]);
        i++;
    }
}
std::string Megaphone::getString() const{
    return(str);
}

int main(int ac, char **av){
    if (ac > 1)
    {
        int i = 1;
        while(i < ac){
            Megaphone ob(av[i]);
            ob.setString();
            std::cout << ob.getString();
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
