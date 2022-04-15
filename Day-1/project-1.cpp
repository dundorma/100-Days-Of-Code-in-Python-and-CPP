#include <iostream>
#include <string>

int main(){
    std::string city{}, pet{};
    
    std::cout << "What's name of the city you grew up in? ";
    std::cin >> city;
    std::cout << "What's your pet's name? ";
    std::cin >> pet;

    std::cout << "Your band name could be " << city << " " << pet;

    return 0;
}
