//
// Created by tde-sous on 11/20/23.
//

#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string& str, const std::string& from, const std::string& to) {
    std::string result;
    size_t startPos = 0;
    size_t foundPos;

    while ((foundPos = str.find(from, startPos)) != std::string::npos) {
        result.append(str, startPos, foundPos - startPos);
        result.append(to);
        startPos = foundPos + from.length();
    }

    result.append(str, startPos, str.length() - startPos);
    return result;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return(std::cout << "Not enough arguments" << std::endl, 1);
    std::fstream file;
    file.open(argv[1], std::ios::in);
    if (file.fail())
        return (std::cout << "File can't be opened!" << std::endl, 1);
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
                file_replace << replaceAll(line, argv[2], argv[3]) << std::endl;
        }
        file_replace.close();
        file.close();
    }
    return 0;
}