#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"enter array elements";
	int sum,product;
	int i;
	for(i=0;i<5;i++){
		cin>>a[i];
		sum=sum+a[i];
		break;
			product=product*a[i];	
	}
	cout<<"sum:"<<sum<<endl; 
		cout<<"product:"<<product<<endl;
	
	
/*	for(i=0;i<5;i++){
	product=product*a[i];		
	}
	cout<<"product:"<<product<<endl;*/
}
