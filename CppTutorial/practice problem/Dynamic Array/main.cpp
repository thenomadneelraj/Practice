#include <iostream>
using namespace std;

int main(){
    const size_t size{5};

    double *p_sal {new double[size]}; // Salry array contains garbage value
    int *p_student {new(nothrow) int[size]{} }; // All Values initialized to 0
    double *p_scores {new(nothrow) double[size]{1,2,3,4,5}};
    
    //Nullptr check and use the allocated array
    if(p_scores){
        cout << "size of scores: " << sizeof(p_scores) << endl ;
        cout << "Successfully allocated memory for scores" << endl;

        //Print out elements. Can use regular array access notation, or pointer arithmetic
        for (size_t i{}; i < size; ++i){
            cout << "value: " <<p_scores[i] << " : " << *(p_scores + i ) << endl;
        }
    }

    delete [] p_sal;
    p_sal = nullptr;

    delete [] p_student;
    p_student = nullptr;
    
    delete [] p_scores;
    p_scores = nullptr;
    
    return 0;
}

//You should never write this in real code:
//double* p_scores = new double[size];

//✅ Use std::vector
// #include <vector>

// std::vector<double> scores {1, 2, 3, 4, 5};
// scores.resize(10); // remaining values become 0

// ✔ No leaks
// ✔ No delete[]
// ✔ Safe & clean