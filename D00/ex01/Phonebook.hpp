/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:04:10 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/01 16:04:11 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

class Phonebook{
    private:
    Contact contacts[8];
    static int index;
    public:
    Phonebook();
    ~Phonebook();
    void addcontact();
    void displayPhonebook() const;
    void searchcontact(int i)const;
};

#endif