#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string name1{}, name2{};
    int true_count{}, love_count{}, score{};
    std::cout << "What is your name? "; std::getline(std::cin, name1);
    std::cout << "What is their name? "; std::getline(std::cin, name2);

    name1 = name1.append(name2);
    std::for_each(name1.begin(), name1.end(), [](char &c){c = std::tolower(c);});

    for(const char &i : name1){
        if(i == 't' || i == 'r' || i == 'u'){
            true_count++;
        }else if(i == 'l' || i == 'o' || i == 'v'){
            love_count++;
        }else if(i == 'e'){
            true_count++;
            love_count++;
        }
    }
    score = true_count*10 + love_count;

    if(score < 10 || score > 90){
        std::cout << "Your score is " << score << ", you go like coke and mentos." << std::endl;
    }else if(score >= 40 && score <= 50){
        std::cout << "Your score is " << score << ", you go alright together." << std::endl;
    }else{
        std::cout << "Your score is " << score << "." << std::endl;
    }

    return 0;
}