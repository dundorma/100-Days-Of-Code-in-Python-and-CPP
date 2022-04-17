#include <iostream>
#include <array>

int main(){
    std::array<std::array<char,3>,3> map;
    map.at(0) = {'O','O','O'};
    map.at(1) = map.at(0);
    map.at(2) = map.at(0);

    for(const auto &ar : map){
        for(const auto &ch : ar){
            std::cout << " " << ch;
        }
        std::cout << std::endl;
    }

    size_t treasure_location{};
    std::cout << "Where do you want to put the treasure ? "; std::cin >> treasure_location;
    map.at(treasure_location%10-1).at(treasure_location/10 - 1) = 'X';

    for(const auto &ar : map){
        for(const auto &ch : ar){
            std::cout << " " << ch;
        }
        std::cout << std::endl;
    }

    return 0;
}