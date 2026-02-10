#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{
    public:
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    private: // Member Variable should be private 
    //Member variable
    double base_radius{4};
    double height{3};
};

int main(){
    Cylinder cylinder1;
    std::cout << "volume : " << cylinder1.volume() << std::endl; 
    return 0;
} 