#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <array>

int main(){
    srand(time(nullptr));
    int player{}, bot{};
    std::array<std::string, 3> result{"Draw", "You lose", "You win"};
    std::array<std::string, 3> rps{"Rock", "Paper", "Scissors"};

    std::cout << "What do you chose? Type 0 for Rock, 1 for Paper, or 2 for Scissors. "; std::cin >> player;
    bot = rand() % 3;
    std::cout << "You       chose: " << rps.at(player) << std::endl;
    std::cout << "Computer  chose: " << rps.at(bot) << std::endl;
    std::cout << result.at((bot-player+3)%3);

    return 0;
}