#include <iostream>
int main(){

    int x1;

    if (std::cin >> x1){
        std::cout << x1 << std::endl;
    }
    else
    {

        std::cout << "Error in cin" << std::endl;
    }
/*
    int x2;
    std::cin >> x2;

    std::cout << x2;*/

/*
    //so the best approach is like that:
    while (std::cin >> x1){
        std::cout << x1 << std::endl;
        break;
    }
*/

    return 0;
}