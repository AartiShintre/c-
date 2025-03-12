#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,4,2,2,1};
	int ans=0;
	int i;
	for(i=0;i<5;i++){
		ans=ans^a[i];
	}
	cout<<ans;
}
