#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	int isprime=true;
	int i;
 for (int i = 2; i <= n -1; i++) // check divisors from 2 to n/2
    {
        if (n % i == 0) // if n is divisible by i, it's not prime
        {
            isprime = false;
            break;
        }
    }
    
    if (isprime==true) {
        cout << "Prime number\n";
    } else {
        cout << "Not a prime number\n";
    }

}
