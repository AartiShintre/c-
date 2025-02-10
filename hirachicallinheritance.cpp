#include<iostream>
using namespace std;

class A {
    public:
        int a, b;

        void get() {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
};

class B : public A {
    public:
        void sum() {
            cout << "Addition: " << a + b << endl;
        }
};
class C : public A {
    public:
        void sub() {
            cout << "Subtraction: " << a - b << endl;
        }
};

int main() {
    B objB;  
    C objC; 

    objB.get();  
    objB.sum(); 
    objC.get();  
    objC.sub();  

    return 0;
}

