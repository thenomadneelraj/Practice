#include <iostream>
using namespace std;

int main(){
    /* 
    int *data = new int [100000000000];

    for(size_t i {0}; i < 100000; ++i){
        int *data = new int[100000]; 
    }
    */
//    for(size_t i {0}; i < 100000; ++i){
//        try{
//            int *data = new int[100000]; 
//         }catch(exception& ex){
//             cout << "Something went Wrong: " << ex.what() << endl;
//         }
//     }

// nothrow exception handling
 for(size_t i {0}; i < 100000; ++i){
           int *data = new(nothrow) int[100000]; 
        if(data != nullptr){
            cout << "Data allocated" << endl;
        }else{ 
            cout << "Data allocation failed"<< endl;
        }       
    }
    cout << "Progream ending well" << endl ;
    return 0;
}