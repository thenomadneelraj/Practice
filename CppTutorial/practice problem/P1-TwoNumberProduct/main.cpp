#include <iostream>
using namespace std;

int mul(int x, int y){
    return x * y;
}
int main(){
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;
    int result = mul(a, b);
    
    cout << "Product = " << result << endl;

    return 0 ;
}