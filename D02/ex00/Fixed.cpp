/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:35:10 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/12 19:38:06 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fpn_val(0){
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& newobj){
    std::cout << "Copy constructor called" << std::endl;
    *this = newobj;
}
Fixed& Fixed::operator=(const Fixed& newobj){
    std::cout << "Copy assignment operator called" << std::endl;
    if (&newobj != this)
        fpn_val = newobj.getRawBits();
    return(*this);
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits( void ) const{
    return (std::cout << "getRawBits member function called" << std::endl, fpn_val);
}
void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    fpn_val = raw;
}
