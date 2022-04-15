#include <iostream>
#include <iomanip>

int main(){
    double total_bill{}, tip_percent{}, bill_person{};
    int peep{};

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "What was the total bill? $";
    std::cin >> total_bill;
    std::cout << "What percentage tip would you like to give? 10, 12, or 15? ";
    std::cin >> tip_percent;
    std::cout << "How many people to split the bill? ";
    std::cin >> peep;

    bill_person = total_bill * (1 + tip_percent/100) / peep;
    std::cout << "Each person should pay " << bill_person;
    return 0;
}