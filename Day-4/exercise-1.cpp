#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(nullptr));
    int random_integer{};
    random_integer = rand() % 2;

    if(random_integer){
        std::cout << "Heads" << std::endl;
    }else{
        std::cout << "Tails" << std::endl;
    }
    
    return 0;
}