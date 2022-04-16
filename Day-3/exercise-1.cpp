#include <iostream>

int main(){
    int number{};
    std::cout << "Which number do you want to check? ";
    std::cin >> number;

    if(number%2){
        std::cout << "This is an odd number." << std::endl;
    }else{
        std::cout << "This is an even number." << std::endl;
    }
    
    return 0;
}