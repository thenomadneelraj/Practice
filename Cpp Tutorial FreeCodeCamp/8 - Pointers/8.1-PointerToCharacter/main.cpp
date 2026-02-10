#include <iostream>
using namespace std;
int main(){
    //ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings] char* message {"Hello World!"}
    //char* message {"Hello World!"};
    const char* message {"Hello World!"};
    cout << "message : " << message << endl;

    // *message = "B"; // Compiler error
    cout << "message: " << *message << endl;

    // Allow User to Modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    cout << "Message1: " << message1 << endl;
    return 0;  
}