//
// Created by ctsnz0060 on 27.07.2018.
//

#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::vector<std::string> lines;

    std::ifstream in("../stringtest.txt");
    if (in.is_open())
    {
        char ch;

        while(!in.eof())
        {
            std::string line;
            do{
                ch = in.get();
                line += ch;
            } while (ch != '\n' && !in.eof());

            lines.push_back(line);
        }

    }
    else
    {
        std::cout << "error in open phase" << std::endl;
    }


    for (auto el: lines)
        std::cout << el;

    return 0;

}
