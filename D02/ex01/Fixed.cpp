/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:35:10 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/12 19:13:01 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fpn_val(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x){
    std::cout << "Int constructor called" << std::endl; 
    fpn_val = (x << fract_bits);
}

Fixed::Fixed(const float x){
    std::cout << "Float constructor called" << std::endl; 
    fpn_val = roundf(x * (1 << fract_bits)); 
}

Fixed::Fixed(const Fixed& newobj){
    std::cout << "Copy constructor called" << std::endl;
    *this = newobj;
}

Fixed& Fixed::operator=(const Fixed& newobj){
    std::cout << "Copy assignment operator called" << std::endl;
    if (&newobj != this)
        fpn_val = newobj.getRawBits();
    return( *this);
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const{
    return (fpn_val);
}
void Fixed::setRawBits(int const raw){
    fpn_val = raw;
}

float Fixed::toFloat(void) const{
    return((float)fpn_val / (1 << fract_bits));
}

int Fixed::toInt(void) const{
    return(fpn_val >> fract_bits);
}

std::ostream &operator <<(std::ostream &output, const Fixed &obj)
{
    output << obj.toFloat();
    return (output);
}
