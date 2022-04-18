/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:20 by marcos            #+#    #+#             */
/*   Updated: 2022/04/18 12:23:48 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cctype>
int     findOcurrences(std::string str, std::string substr)
{
    int i = 0;
    int pos;
    std::string tmp;
    while(str.find(substr) != -1)
    {
        pos = str.find(substr);
        tmp = str.substr(pos + 1,str.length());
        str = tmp;
        i++; 
    }
    return (i);
}
std::string   replace_line(std::string &line, std::string s1, std::string s2)
{
    int pos;
    int i = 0;
    std::string tmp;
    while(i < findOcurrences(line,s1))
    {
        pos = line.find(s1);
        tmp = line.substr(0, pos) + s2 +  line.substr(pos + s1.length(), line.length());
        line = tmp;
        i++;
    }
    std::cout << line << std::endl;
    return (line);
}

int    main(int argc, char **argv)
{
    if(argc != 4 || argv[2][0] == '\0' || argv[3][0] == '\0')
    {
        std::cout << "numero de argumentos incorrectos" << std::endl;
        return (1);
    }
        
    std::fstream myfile;
    std::fstream newfile;
    std::string filename = (std::string)argv[1];
    std::string newfilename =  (std::string)argv[1] + ".replace";
    std::string line;
    std::string replacedline;
    std::string s1 = (std::string)argv[2];
    std::string s2 = (std::string)argv[3];

    myfile.open(filename, std::ios::in);
    newfile.open(newfilename, std::ios::out);
    while (std::getline(myfile, line)) {
        if(line.find(s1) != -1)
        {
            replacedline = replace_line(line,s1,s2);
            newfile << replacedline << "\n";
        }
        else
            newfile << line << "\n";
    }

    myfile.close();
    return (0);
}