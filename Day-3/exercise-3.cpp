#include <iostream>

int main(){
    int year{};
    std::cout << "Which year do you want to check? "; std::cin >> year;

    if(!(year%4)){
        if(!(year%100)){
            if(!(year%400)){
                std::cout << "Leap year." << std::endl;
            }else{
                std::cout << "Not leap year." << std::endl;
            }
        }else{
            std::cout << "Leap year." << std::endl;
        }
    }else{
        std::cout << "Not leap year." << std::endl;
    }

    return 0;
}