#include<iostream>
using namespace std;
int main()
{
/*	char arr[5]={'a','r','t','i'};
	cout<<arr<<endl;
	
	char str[10];
	cout<<"enter input"<<endl;
	cin>>str;
	cout<<"output:"<<str;*/
	//input
	char a[10]="arti";
	int i;
	cout<<"enter input";
	for( i=0;i<10;i++){
		cin>>a[i];
	}
		for( i=0;a[i]!='\0';i++){
		cout<<a[i];
	}
/*	char str[100];
	cout<<"enter array\n";
	cin.getline(str,100);
	cout<<"output\n"<<str<<endl;*/
	
}
