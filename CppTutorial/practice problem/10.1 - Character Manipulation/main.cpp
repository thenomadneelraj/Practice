#include <iostream>

int main(){
    /*
    //Check if character is alphanumeric
    std::cout << std::endl;
    std::cout << "std::isalnum: " << std::endl;
    
    std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;
    
    //Can use this as a test condition
    char input_char {'*'};
    if(std::isalnum(input_char)){
        std::cout << input_char << " is alphanumeric." << std::endl;
    }else{
        std::cout << input_char << " is not alphanumeric." << std::endl;
    }
    */

    // Check if character is alphaalphabetic
    std::cout << std::endl;
    std::cout << "std::isalpha: " << std::endl;
    std::cout <<  "C is alphabetic" << std::isalpha('C')  << std::endl;
    std::cout <<  "^ is alphabetic" << std::isalpha('^')  << std::endl;
    std::cout <<  "7 is alphabetic" << std::isalpha('7')  << std::endl;
    return 0;
}