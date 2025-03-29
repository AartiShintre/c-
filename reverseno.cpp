#include<iostream>
using namespace std;
int reverse_no(int n){
	int rem;
	int no=0;
	while(n!=0){
		rem=n%10;
		no=(no*10)+rem;
		n=n/10;
		
	}
	cout<<no;
}
int main()
{
	int n=8643;
	reverse_no(n);
	return 0;
}
