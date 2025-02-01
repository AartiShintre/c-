#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int start,end,i;
	for(start=0;start<5;start++){
		for(end=start;end<5;end++){
			for(i=start;i<=end;i++){
				cout<<a[i];
			}
			cout<<" ";
		}
		cout<<endl;
	}
}
