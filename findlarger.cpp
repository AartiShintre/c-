#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	cout<<"enter c";
	cin>>c;
	if(a>b&&a>c)
	{
		cout<<a<<"is larger";
	}
	else if(b>c&&b>a)
	{
		cout<<b<<"is larger";
	}
	else if(c>b&&c>a)
	{
		cout<<c<<"is larger";
	}
}

