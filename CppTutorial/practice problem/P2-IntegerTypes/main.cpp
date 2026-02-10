#include <iostream>
using namespace std;

int main(){

//Braced Initializers

    // Variable may contain random garbage value. WARNING
    int elephant_count; // Contain Garbage value(0, 1) anything
    int lion_count{};
    int dog_count {10};
    int cat_count{15};

    // Can use expression as initializer 
    int domesticated_animals {dog_count + cat_count};
    cout << "elephant_count: " << elephant_count << std::endl;
    cout << "lion_count: " << lion_count << std::endl;
    cout << "cat_count: " << cat_count << std::endl;
    cout << "domesticated_count: " << domesticated_animals << std::endl;
    
// Function Initialization
    
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    
    int narrowing_conversion_function(2.9); // Output = 2 Floor Function
    
    cout << "Apple Count: " << apple_count << endl;
    cout << "Orange Count: " << orange_count << endl;
    cout << "fruit Count: " << fruit_count << endl;
    cout << "narrowing_conversion: " << narrowing_conversion_function << endl;
    

// Assignment Initialization

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    cout << "Bike count: " << bike_count << endl;
    cout << "Truct count: " << truck_count << endl;
    cout << "Vehicle count: " << vehicle_count << endl;
    cout << "Narrowing conversion: " << narrowing_conversion_assignment << endl;
    
    // Check the size with sizeof
    cout << "sizeof int: " << sizeof(int) << endl;
    cout << "sizeof truck_count: " << sizeof(truck_count) << endl;

    return 0;
}