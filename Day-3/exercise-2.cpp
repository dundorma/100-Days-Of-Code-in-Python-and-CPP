#include <iostream>
#include <cmath>

int main(){
    double weight{}, height{}, bmi{};
    std::cout << "Enter your height in m: "; std::cin >> height;
    std::cout << "Enter your weight in kg: "; std::cin >> weight;
    
    bmi = round(weight/pow(height,2));
    
    if(bmi <= 18.5){
        std::cout << "Your BMI is " << bmi << ", you are underweight." << std::endl;
    }else if(bmi <= 25){
        std::cout << "Your BMI is " << bmi << ", you have a normal weight." << std::endl;
    }else if(bmi <= 30){
        std::cout << "Your BMI is " << bmi << ", you are slightly overweight." << std::endl;
    }else if(bmi <= 35){
        std::cout << "Your BMI is " << bmi << ", you are obese." << std::endl;
    }else{
        std::cout << "Your BMI is " << bmi << ", you are clinically obese." << std::endl;
    }

    return 0;
}