#include <iostream>
#include <cstring>

int main(){
    /*
    // Concatination
    std::cout << std::endl;
    std::cout << "std::strcat: " << std::endl;
    
    char dest[50] = "Hello";
    char src[50] = "World";
    std::strcat(dest, src);
    std::cout << "desc : " << dest << std::endl;
    std::strcat(dest, "Goodbye World");
    std::cout << "desc : " << dest << std::endl;
    */
    std::cout << std::endl;
    std::cout << "More std::strcat : " << std::endl;
    
    char *dest1 = new char[30] {'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
    char *source1 = new char[30]{',', 'T', 'h', 'e', 'p', 'h', 'e', 'n', 'i', 'x', 'K', 'i', 'n', 'g', '!', '\0'};

    std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(source1): " << std::strlen(source1) << std::endl;
    
    std::cout << "Concatinating..." << std::endl;
    std::strcat(dest1, source1);

    std::cout << "std:strlen(dest1): " << std::strlen(dest1) << std::endl;
    std::cout << "dest1 : " << dest1 << std::endl;   
    return 0;
}