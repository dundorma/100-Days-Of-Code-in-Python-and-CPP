#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <cmath>


template<typename T>
std::vector<T> string_splitter(const std::string &str, const char &&ch);


int main(){
    std::string student_heights{};
    std::vector<int> student_heights_vec{};
    double students{}, total_heights{}, average_heights{};

    std::cout << "Input a list of student heights : "; std::getline(std::cin, student_heights);
    student_heights_vec = string_splitter<int>(student_heights, ' ');

    for(const auto &i : student_heights_vec){
        total_heights += i;
        students++;
    }

    average_heights = round(total_heights/students);
    std::cout << average_heights;

    return 0;
}


template<typename T>
std::vector<T> string_splitter(const std::string &str, const char &&ch){
    std::string buff{};
    std::istringstream i_stream{str};
    std::vector<T> vec_out{};

    while(std::getline(i_stream, buff, ch)){
        buff.erase(std::remove_if(buff.begin(), buff.end(), [](const char &chr){return !(std::isdigit(chr));}), buff.end());
        std::istringstream i_buff{buff};
        T buffer{};
        i_buff >> buffer;
        vec_out.push_back(buffer);
    }

    return vec_out;
}