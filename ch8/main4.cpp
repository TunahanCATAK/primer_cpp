//
// Created by ctsnz0060 on 27.07.2018.
//

#include <iostream>
#include <fstream>

int Read(std::istream&);

int main()
{
/*
    int x1;
    x1 = Read(std::cin);

    if (x1 == -1)
    {
        std::cout << "fail" << std::endl;
    }
    else
    {
        std::cout << x1 << std::endl;
    }
*/


    int x2;
    std::string path("../test.txt");
    std::ifstream in(path);

    x2 = Read(in);
    if (x2 == -1)
    {
        std::cout << "fail" << std::endl;
    }
    else
    {
        std::cout << x2 << std::endl;
    }

    return 0;
}


int Read(std::istream& input)
{
    int x1;
    input >> x1;

    if (input.good())
        return x1;
    else
        return -1;
}