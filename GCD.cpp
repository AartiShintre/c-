#include <iostream>
using namespace std;

int GCD(int a, int b) {
    int gcd = 1; 

    for (int i = 1; i <= min(a, b); i++) { 
            gcd = i; 
        }
    }

    return gcd; 
}

int main() {
    int a = 12;
    int b = 18;
    
    cout << "GCD of " << a << " and " << b << " is: " << GCD(a, b) << endl;

    return 0;
}

