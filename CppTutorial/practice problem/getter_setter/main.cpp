#include <iostream>
using namespace std;

class Person {
protected:
    string name;   // accessible in derived class

public:
    // Setter
    void setName(const string& n) {
        name = n;
    }

    // Getter
    string getName() const {
        return name;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    // Setter
    void setRollNo(int r) {
        rollNo = r;
    }

    // Getter
    int getRollNo() const {
        return rollNo;
    }

    void display() const {
        cout << "Name: " << getName() << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.setName("Rahul");   // inherited setter
    s.setRollNo(101);

    s.display();

    return 0;
}


/*
📘 How This Works

name is protected → accessible in Student

setName() & getName() are public → inherited

Student uses base class getter instead of direct access

Data remains encapsulated
*/


/*
📘 Exam-Ready Definition

In inheritance, getters and setters allow derived classes to access and modify base class data safely while maintaining encapsulation.

📘 Real-World Analogy

Base class = Bank vault (data hidden)

Getter = View balance

Setter = Deposit money

Derived class = Authorized employee
*/