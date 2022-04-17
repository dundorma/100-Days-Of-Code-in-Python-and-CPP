#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>


std::vector<std::string> string_splitter(const std::string &str, const char &&ch);


int main(){
    std::string names_string{};
    std::vector<std::string> names{};
    size_t random_number{};
    srand(time(nullptr));
    std::cout << "Give me everybody's names, separated by a coma. : "; std::getline(std::cin, names_string);
    names = string_splitter(names_string, ',');

    random_number = rand() % names.size();
    std::cout << names.at(random_number) << " is going to buy the meal today!" << std::endl;

    return 0;
}


std::vector<std::string> string_splitter(const std::string &str, const char &&ch){
    std::vector<std::string> vec_out{};
    std::istringstream i_stream{str};
    std::string buff{};
    while(std::getline(i_stream,buff,ch)){
        if(buff.at(0) == ' ')buff.erase(buff.begin());
        vec_out.push_back(buff);
    }

    return vec_out;
}