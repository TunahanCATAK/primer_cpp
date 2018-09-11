//
// Created by ctsnz0060 on 24.07.2018.
//

#include <iostream>
#include <string>

std::istream& readAndShow(std::istream&);

int main()
{

    readAndShow(std::cin);

    return 0;
}


std::istream& readAndShow(std::istream& inputStream)
{

    std::string str;

    do {

        inputStream >> str;
        std::cout << str;

    } while (!inputStream.eof());

    inputStream.clear();
    return inputStream;

}