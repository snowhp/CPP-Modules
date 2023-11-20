//
// Created by tde-sous on 11/20/23.
//

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return(std::cout << "Not enough arguments" << std::endl, 0);
    std::fstream file;
    file.open(argv[1], std::ios::in);
    if (file.fail())
        return (std::cout << "File can't be opened!" << std::endl, 0);
    else {
        std::cout << "File opened!" << std::endl;
        std::fstream file_replace;
        std::string file_replace_name = argv[1];
        file_replace_name += ".replace";
        file_replace.open(file_replace_name.c_str(), std::ios::out);
        std::string line;
        if (file.is_open())
        {
            while(getline(file, line))
            {
                std::cout << line << std::endl;
                file_replace << line << std::endl;
            }
        }
        file_replace.close();
        file.close();
    }
    return 0;
}