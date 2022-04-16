#include <iostream>
#include <cctype>
#include <map>
#include <string>

int main(){
    int bill{};
    char p_size{'n'},pechees{'n'};
    std::map<int, std::string> o_choice{{0, "Do you want pepperoni? Y or N "}, {1, "Do you want extra cheese? Y or N "}};
    
    std::cout << "Welcome to Python Pizza Deliveries!" << std::endl;
    std::cout << "What size pizza do you want? S, M, or L? "; std::cin >> p_size;
    p_size = std::tolower(p_size);
    switch(p_size){
        case 's': bill += 15;
            break;
        case 'm': bill += 20;
            break;
        case 'l': bill += 25;
            break;
        default:
            break;
    }

    for(int i = 0; i < 2; i++){
        std::cout << o_choice[i]; std::cin >> pechees;
        pechees = std::tolower(pechees);
        if(pechees == 'y' && i){
            bill += 1;
        }else if (pechees == 'y'){
            if(p_size == 's'){
                bill += 2;
            }else{
                bill += 3;
            }
        }
    }

    std::cout << "Your final bill is $" << bill;
    return 0;
}