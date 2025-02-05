#include<iostream>
using namespace std;
int main()
{
	int n=4;
	int a[n]={2,7,11,15};
	int target=9;
	int i=0,j=n-1;

	while(i<j)
	{
			int pairsum=a[i]+a[j];
		if(pairsum==target){
	cout<<i<<"\t"<<j;
	break;
	
		}
		else if(pairsum>target){
			j--;
				}
		else{
			i++;
		
		}
	}
	
}
