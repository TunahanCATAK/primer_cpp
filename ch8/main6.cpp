//
// Created by ctsnz0060 on 27.07.2018.
//


#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

struct PersonInfo{
    std::string name;
    std::vector<std::string> phones;
};

int main()
{
    std::string line, word;
    std::vector<PersonInfo> people;

    std::ifstream in("../personals.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            PersonInfo info;
            std::istringstream record(line);
            record >> info.name;
            while (record >> word)
            {
                info.phones.push_back(word);
            }
            people.push_back(info);
        }
    }


}