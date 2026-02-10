#include <iostream>

// C++ 20 BoilerPlate
const double PI{22/7};

class Cylinder{
    public:
        //Constructor
        Cylinder(){
            base_radius = 2.5;
            height = 5;
        }
        // Functions(Methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    private:
        // Member Variables
        double base_radius{1};
        double height{3};
};

int main(){
    Cylinder cylinder1; // Object
    std::cout << "volume : " << cylinder1.volume()  << std::endl;
    return 0;
}