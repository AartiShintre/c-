#include<iostream>
using namespace std;
int main()
{
	int binary_num;
	cout<<"enter a binary number";
	cin>>binary_num;
	int pow=1;
	int ans=0;
	while(binary_num>0)
	{
		int rem,c;
		rem=binary_num%10;
		binary_num=binary_num/10;
		c=rem*pow;
		ans=ans+c;
		pow=pow*2;
	}
	cout<<ans;
}
