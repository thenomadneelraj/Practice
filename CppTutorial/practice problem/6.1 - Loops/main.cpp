#include <iostream>
using namespace std;

int main(){
    int i = 2;
    int a = i++; // i = 3 after execution
    int b = ++i; // i = 4 then executes the code

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "i = " << i << endl;
    return 0;
}