/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:25:42 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/06 20:25:42 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rep.hpp"

void ft_replace(std::string filename, std::string s1, std::string s2)
{
    std::string newfile = filename + ".replace";
    std::fstream outfile;
    outfile.open(newfile, std::ios::out);
    if (!outfile.is_open())
    {
        std::cout << "Error openning " << newfile << " for writing" << std::endl;
        return ;
    }
    std::fstream infile;
    infile.open(filename, std::ios::in);
    if(!infile.is_open())
    {
        std::cout << "Error openning " << filename << " for reading" <<  std::endl;
        outfile.close();
        return ;
    }
    std::string line;
    while(getline(infile, line))
    {
        size_t pos = 0;
        while(!s1.empty() && pos < line.length())
        {
            pos = line.find(s1, pos);
            if(pos != std::string::npos)
            {
                line = line.substr(0, pos)+ s2 + line.substr(pos + s1.length());
                pos += s2.length();
            }
        }
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }
    outfile.close();
    infile.close();
}
