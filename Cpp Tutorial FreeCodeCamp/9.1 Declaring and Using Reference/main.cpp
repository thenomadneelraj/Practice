#include <iostream>

int main(){
    int int_data {45};
    double double_data {33.65};

    int& reference_to_int_data{int_data};
    double& refenence_to_double_data {double_data};
    //You have to declare and initialize in one statement

    std::cout << "int_value: " << int_data << std::endl;
    std::cout << "&int_value: " << &int_data << std::endl;
    std::cout << "double_value: " << double_data << std::endl;
    std::cout << "&double_value: " << &double_data << std::endl;
    
    std::cout <<"====================="<< std::endl;

    std::cout << "ref_int_data: " << reference_to_int_data << std::endl;
    std::cout << "&ref_int_data: " << &reference_to_int_data << std::endl;
    std::cout << "ref_double_data: " << refenence_to_double_data << std::endl;
    
    return 0;
}