#include <iostream>

int main(){
    double height{}, weight{};
    int bmi{};
    
    std::cout << "Enter your height in m: ";
    std::cin >> height;
    std::cout << "Enter you weight in kg: ";
    std::cin >> weight;

    bmi = weight/(height*height);
    std::cout << bmi << std::endl;
    return 0;
}