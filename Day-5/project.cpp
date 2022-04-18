#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <random>
#include <algorithm>

int main(){
    std::vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    std::vector<char> numbers{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::vector<char> symbols{'!', '#', '$', '%', '&', '(', ')', '*', '+'};
    std::vector<char> password{};

    size_t nr_letters{}, nr_numbers{}, nr_symbols{}; uint_fast32_t buff{};
    std::cout << "How many letters would you like in your password : "; std::cin >> nr_letters;
    std::cout << "How many symbols would you like in your password : "; std::cin >> nr_symbols;
    std::cout << "How many numbers would you like in your password : "; std::cin >> nr_numbers;

    for(size_t i = 0; i < nr_letters; i++){
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist(0, letters.size()-1);
        buff = dist(rng);
        password.push_back(letters.at(buff));
    }

    for(size_t i = 0; i < nr_symbols; i++){
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist(0, symbols.size()-1);
        buff = dist(rng);
        password.push_back(symbols.at(buff));
    }

    for(size_t i = 0; i < nr_numbers; i++){
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist(0, numbers.size()-1);
        buff = dist(rng);
        password.push_back(numbers.at(buff));
    }
    
    auto rng = std::default_random_engine{};
    std::shuffle(std::begin(password), std::end(password), rng);

    for(const auto &i : password){
        std::cout << i;
    }
    std::cout << std::endl;

    return 0;
}