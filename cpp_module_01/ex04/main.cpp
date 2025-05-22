/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laoubaid <laoubaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:28:48 by laoubaid          #+#    #+#             */
/*   Updated: 2025/01/01 16:33:59 by laoubaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void recur(std::string &str, std::string &find, std::string &replace, size_t pos)
{
    size_t idx = str.find(find.c_str(), pos);
    if (idx != (size_t)-1)
    {
        str.erase(idx, find.length());
        str.insert(idx, replace);
        pos = idx + replace.length();
        recur(str, find, replace, pos);
    }
}

int main(int ac, char **av)
{
    std::string filename;
    std::string buff;
    std::string content;
    std::string find;
    std::string replace;

    if (ac != 4)
    {
        std::cerr << "Error: wrong number of arguments!\n Usage:\n\t";
        std::cerr << av[0] << " <filename> <find> <replace>" << std::endl;
        return 1;
    }

    find = std::string(av[2]);
    replace = std::string(av[3]);
    filename = std::string(av[1]) + ".replace";

    std::ifstream infile(av[1]);
    if (!infile)
        return (std::cerr << "Error: unable to open file <" << av[1] << ">\n", 1);
    std::ofstream outfile(filename.c_str(), std::ios::out);
    if (!outfile)
        return (std::cerr << "Error: unable to open file <" << filename << ">\n", 1);
    
    while (std::getline(infile, buff))
    {
        content += buff;
        if (!infile.eof())
            content += "\n";
    }
    if (!find.empty())
        recur(content, find, replace, 0);
    outfile << content;
    return 0;
}