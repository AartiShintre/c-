#include<iostream>
using namespace std;
int armstrom(int n){
	int rem;
	int sum=0;
	int newno=n;
	bool isarmstrom=false;
	while(n!=0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(newno==sum){
		cout<<"is armstrom";
	}
	else{
		cout<<"is not";
	}

}
int main()
{
	int n=153;
	armstrom(n);
	return 0;
	
	}

