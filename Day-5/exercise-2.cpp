#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

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

int main(){
    std::string str_student_scores{};
    std::vector<int> student_scores{};
    int highest_score{};
    std::cout << "Input a list of student scores : "; std::getline(std::cin, str_student_scores);

    student_scores = string_splitter<int>(str_student_scores, ' ');
    highest_score = student_scores.at(0);

    for(const auto &i : student_scores){
        if(i > highest_score) highest_score = i;
    }

    std::cout << "The highest score in the class is: " << highest_score;
    return 0;
}