#include<iostream>
using namespace std;
int sum(int n);
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	cout<<sum(n);
}
int sum(int n)
{
	int digitsum=0;
	int lastdigit;
	while(n>0)
	{
		lastdigit=n%10;
		n=n/10;
		digitsum=digitsum+lastdigit;
	
		
	}
		return digitsum;
}
