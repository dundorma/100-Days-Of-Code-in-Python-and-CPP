#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main(){
    int num{};
    std::vector<int> num_vec{};
    std::cout << "Type a two digit number: ";
    std::cin >> num;

    for(;num;num/=10){
        num_vec.push_back(num%10);
    }
    int sum{std::accumulate(num_vec.begin(), num_vec.end(), 0)};
    std::cout << sum;
}