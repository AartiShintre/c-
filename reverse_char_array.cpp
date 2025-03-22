#include<iostream>
using namespace std;
int main()
{
	char a[5]={'a','r','t','i'};
	int i;
	int start=0;
	int end=4;
	while(start<end){
		swap(a[start],a[end]);
		start++;
		end--;
	}
	for(i=0;i<5;i++)
	cout<<a[i];
}
