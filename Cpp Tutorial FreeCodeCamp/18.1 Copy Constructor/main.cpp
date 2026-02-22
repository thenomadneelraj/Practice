#include <iostream>
using namespace std;

class Base {
public:
    int x;

    Base(int a) {
        x = a;
    }

    Base(const Base &b) {
        cout << "Base Copy Constructor Called\n";
        x = b.x;
    }
};

class Derived : public Base {
public:
    int y;

    Derived(int a, int b) : Base(a) {
        y = b;
    }

    Derived(const Derived &d) : Base(d) {   // Calling Base Copy Constructor
        cout << "Derived Copy Constructor Called\n";
        y = d.y;
    }
};

int main() {
    Derived obj1(10, 20);
    Derived obj2 = obj1;   // Copy happens here
}

/*
If you do not explicitly call the base class copy constructor in the initializer list:

Derived(const Derived &d) {
    y = d.y;
}
Then C++ will automatically call the base class default constructor, NOT the copy constructor.


Why We Use : Base(d) ?
Derived(const Derived &d) : Base(d)

This means:

Pass the derived object to the base class copy constructor

Copy the base part correctly
*/