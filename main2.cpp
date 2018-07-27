//
// Created by ctsnz0060 on 23.07.2018.
//

#include <iostream>

int main(){

    int x1;

    do{
        std::cout << "Please enter your student Id: " << std::endl;

        while( !(std::cin >> x1) )
        {
            std::cout << "Please enter numbers only" << std::endl;
//            std::cin.clear();
//            std::cin.ignore(10000, '\n');
        }
        std::cout << "Student number is: " << x1 << std::endl;

    } while (x1 != -1);

    return 0;
}