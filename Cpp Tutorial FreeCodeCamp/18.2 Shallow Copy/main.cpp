#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int value) {
        data = new int(value);
    }

    // Default copy constructor (Shallow Copy)
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;  // Shallow copy

    *obj2.data = 50;

    cout << *obj1.data << endl;  // Output?
}

/*
❗ Why?

Because:

obj1.data and obj2.data store the same address

Changing one changes the other

🔴 Problems with Shallow Copy

Data corruption

Double deletion error

Memory leak

Unexpected behavior

If both objects call destructor → memory gets deleted twice ❌

*/