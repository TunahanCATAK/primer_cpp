//
// Created by ctsnz0060 on 23.07.2018.
//

#include <iostream>

int main()
{

    int x1;

    std::cin >> x1;

    if (std::cin.fail())
        std::cout << "cin is failed." << std::endl;

    if (std::cin.good())
        std::cout << "cin is good." << std::endl;


    return 0;
}