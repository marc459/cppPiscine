/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:20 by marcos            #+#    #+#             */
/*   Updated: 2022/02/23 16:54:34 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>

std::string   replace_line(std::string &line, std::string s1, std::string s2)
{
    int pos;
    std::string tmp;
    while(line.find(s1) != -1)
    {
        pos = line.find(s1);
        tmp = line.substr(0, pos) + s2 +  line.substr(pos + s1.length(), line.length());
        line = tmp;
    }
    return (line);
}

int    main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "numero de argumentos incorrectos" << std::endl;
        return (1);
    }
        
    std::fstream myfile;
    std::fstream newfile;
    std::string filename = (std::string)argv[1];
    std::string newfilename = "replace." + (std::string)argv[1];
    std::string line;
    std::string replacedline;
    std::string s1 = (std::string)argv[2];
    std::string s2 = (std::string)argv[3];

    myfile.open(filename, std::ios::in);
    newfile.open(newfilename, std::ios::out);
    while (std::getline (myfile, line)) {
        if(line.find(s1) != -1)
        {
            std::cout << line.find(s1) <<  "finded replacedline on " << line << std::endl;
            replacedline = replace_line(line,s1,s2);
            newfile << replacedline << "\n";
        }
        else
            newfile << line << "\n";
    }

    myfile.close();
    return (0);
}