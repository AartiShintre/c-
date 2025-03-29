#include<iostream>
using namespace std;
int sum(int n){
	int rem;
	int sum=0;
	while(n!=0){
		rem=n%10;
	sum=sum+rem;
	n=n/10;

	}
	cout<<"sum is"<<sum;	
}
int main()
{
	int n=9876;
	sum(n);
	return 0;
}
