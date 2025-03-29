#include<iostream>
using namespace std;
int checkno(int n){

	int rem;
		int count=0;
	while(n!=0){
	rem=n%10;
	 count++;
	cout<<rem<<endl;
	n=n/10;
	
}
	cout<<"count is"<<count<<endl;
}
int main()
{
	int n=4567;
	checkno(n);
	return 0;
}
