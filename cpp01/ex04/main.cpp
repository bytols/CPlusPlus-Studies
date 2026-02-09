/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:36:49 by erocha-l          #+#    #+#             */
/*   Updated: 2026/02/09 19:54:45 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void    swap_string(std::ifstream &file,  std::ofstream &copyf,std::string find, std::string replace)
{
    std::string line;
    if (find.empty())
    {
        while (std::getline(file, line))
        {
            copyf << line;
            if (!file.eof())
                copyf << std::endl;
        }
        if (file.eof())
            std::cout << "Reached end of file." << std::endl;
        else
            std::cerr << "Error: File reading failed!" << std::endl;
        return;
    }
    while (std::getline(file, line))
    {
        size_t pos = 0;
        while(true)
        {
            pos = line.find(find, pos);
            if (pos == std::string::npos)
                break ;
            line.erase(pos, find.length());
            line.insert(pos, replace);
            pos += replace.length();
        }
        copyf << line;
        if (!file.eof())
            copyf << std::endl;
    }
    if (file.eof())
        std::cout << "Reached end of file." << std::endl;
    else
        std::cerr << "Error: File reading failed!" << std::endl;
    return ;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return (1);
    
    std::string match(argv[2]);
    std::string replace(argv[3]);
    std::string filename = (std::string)argv[1] + ".replace";
    std::ifstream file(argv[1]);
    if ((!file.is_open()))
    {
        std::cerr << "error opening the file!" << std::endl;
        return (1);
    }
    std::ofstream cpyfile(filename.c_str());
    swap_string(file, cpyfile, match, replace);
    file.close();
    cpyfile.close();
    return (0);
}