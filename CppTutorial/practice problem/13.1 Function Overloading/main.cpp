#include <iostream>

int max(int a, int b){
    return (a > b)? a : b;
}

/*
Cant overload on the return type. Compiler Error
double max(int a, int b){
    return (a > b)? a : b;
}
*/

double max(double a, double b){
    return (a > b)? a : b;
}

std::string_view max(std::string_view a, std::string_view b){
    return (a > b)? a : b;
}
int main(){
    return 0;
}