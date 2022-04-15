#include <iostream>

int main(){
    int a{}, b{}, *c{new int(0)};
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    *c = a;
    a = b;
    b = *c;
    
    std::cout << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    delete c;
    return 0;
}
