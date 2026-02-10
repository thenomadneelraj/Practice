#include <iostream>
using namespace std;
int main(){
    char value = 65;
    cout << "value: " << value << endl;
    cout << "value(int): " << static_cast<int>(value) << endl;
    return 0;
} 