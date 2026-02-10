#include <iostream>
using namespace std;
int main(){
   char message1[5] = {'H', 'E', 'L', 'L', 'O'};
   char message2[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
   for (int i = 0; i < 5; i++){
       cout << message1[i] << endl;
   }
   for (int i = 0; i < 5; i++){
       cout << message2[i] << endl;
   }
   return 0;
}