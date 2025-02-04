#include<iostream>
using namespace std;
int main()
{
	int deciNum;
	cout<<"enter a decinumber";
	cin>>deciNum;
	int pow=1;
	int ans=0;
	while(deciNum>0)
	{
		int reminder=deciNum%2;
		deciNum=deciNum/2;
		int c=(pow*reminder);
		ans=ans+c;
		pow=pow*10;
	}
	cout<<ans;
}
