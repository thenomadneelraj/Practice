#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int value) {
        data = new int(value);
    }

    // Deep Copy Constructor
    Demo(const Demo &d) {
        data = new int(*d.data);  // Allocate new memory
    }

    ~Demo() {
        delete data;
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;  // Deep copy

    *obj2.data = 50;

    cout << *obj1.data << endl;
}