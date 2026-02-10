#include <iostream>
// Pass by Value
template <typename T> T maximum(T a, T b); // Declaration

    // Pass By Reference
    // template <typename T> const T& maximum(const T &a, const T &b); // Declaration

int main(){
    double a{34.3};
    double b{31.3};

    std::cout << "Out - &a: " << &a << std::endl;
    auto result = maximum(a,b);
    std::cout << "Out - &a: " << &a << std::endl;
    
    return 0;
}

// Definition
//Pass By Value
template <typename T> T maximum(T a, T b){
    //Pass by Reference
    // template <typename T> const T& maximum(const T &a, const T &b); // Declaration

    std::cout << "In - &a: " << &a << std::endl;
    return (a > b) ? a : b ;
}