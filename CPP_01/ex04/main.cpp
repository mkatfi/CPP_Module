/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:47:33 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/21 22:47:06 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void replaceInFile(std::string fileName, std::string oldWord, std::string newWord)
{
    std::fstream MyFile;
    MyFile.open(fileName, std::ios::in);
    if (!MyFile.is_open())
    {
        std::cout << "Error: Unable to open the file for reading." << std::endl;
        return;
    }
    std::fstream tempFile(fileName + ".replace", std::ios::out);
    if (!tempFile.is_open()) 
    {
        std::cout << "Error: Unable to create a temporary file for writing." << std::endl;
        MyFile.close();
        return;
    }
     std::string line;
    while (getline(MyFile, line)) 
    {
        std::string modifiedLine;
        size_t pos = 0;
        while (pos < line.length()) 
        {
            size_t fond = line.find(oldWord, pos);
            if (fond == std::string::npos) 
            {
                modifiedLine += line.substr(pos);
                break;
            }
            modifiedLine += line.substr(pos, fond - pos) + newWord;
            pos = fond + oldWord.length();
        }
        tempFile << modifiedLine << '\n';
    }
    MyFile.close();
    tempFile.close();
}

int main(int argc, char** argv) {
    if (argc != 4) 
    {
        std::cout << "Usage: " << argv[0] << " <file> <old_word> <new_word>" << std::endl;
        return 1;
    }
    replaceInFile(argv[1], argv[2], argv[3]);
    return 0;
}
