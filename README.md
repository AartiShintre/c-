#include<iostream>
using namespace std;
int main()
{
	int sugar,milk,bread;
	cout<<"enter the price of sugar";
	cin>>sugar;
		cout<<"enter the price of milk";
			cin>>milk;
	cout<<"enter the price of bread";
		cin>>bread;
		cout<<"your bill is"<<endl;
		cout<<"sugar"<<"\t"<<sugar<<endl;
		cout<<"milk"<<"\t"<<milk<<endl;	
	cout<<"bread"<<"\t"<<bread<<endl;
	cout<<"________________"<<endl;
	int total=sugar+milk+bread;
		cout<<"total"<<"\t"<<total<<endl;
	return 0;
}
