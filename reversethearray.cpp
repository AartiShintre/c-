#include<iostream>
using namespace std;
int main()
{
	int a[7]={1,2,3,4,5,6,7};
	int size=7,i;
	int start=0;
	int end=size-1;
	int temp=0;
	while(start<end)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	}
	for(i=0;i<7;i++){
		cout<<a[i];	
	}
	

}
