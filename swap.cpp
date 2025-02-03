#include<iostream>
using namespace std;
int swap(int n1,int n2,int temp);
int main()
{
	int n1,n2;
		int temp=0;
		cout<<"enter 1st number";
	cin>>n1;
		cout<<"enter 2nd number";
	cin>>n2;
	swap(n1,n2,temp);
}
int swap(int n1,int n2,int temp)
{

	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"value of frist no after swaping"<<n1<<endl;
	cout<<"value of second after swaping"<<n2<<endl;

}
