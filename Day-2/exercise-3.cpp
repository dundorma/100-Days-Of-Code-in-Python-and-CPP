#include <iostream>

int main(){
    int age{}, age_left{};
    std::cout << "What is your current age? ";
    std::cin >> age;
    age_left = 90 - age;

    std::cout << "You have " << 365*age_left << " days, " << 52*age_left << " weeks, and " << 12*age_left << " months left." << std::endl;
    return 0;
}