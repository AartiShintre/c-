#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int min,minindex=0,maxindex=0;
	int max;
	cout<<"enter array elemts";
	int i,j,k;
	for(k=0;k<5;k++){
		cin>>a[k];}
	for(i=0;i<5;i++){
	if(i==0)	min=a[0];
		if(a[i]>max)	max=a[i];
		maxindex=i;
		if(i==0)	min=a[0];
		if(a[i]<min)	min=a[i];
		minindex=i;
	}
	
		
	
	swap(a[minindex],a[maxindex]);
	for(k=0;k<5;k++){
		cout<<a[k];}
}

