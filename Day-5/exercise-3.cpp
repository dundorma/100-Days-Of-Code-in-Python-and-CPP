#include <iostream>

int main(){
    int total{0};
    for(int i = 2; i <= 100; i++){
        if(!(i%2)){
            total += i;
        }
    }

    std::cout << total;
    return 0;
}