#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b){
    return (a > b)? a : b;
}

int main(){
    int x{5};
    int y{7};

    int* p_x{&x};
    int* p_7{&y};

    auto result = maximum(p_x, p_x);
    std::cout << "result : " << result << std::endl;
    return 0;
}