#include<iostream>
using namespace std;
template <typename T>
void reverse_no(T a[],T n){
	int start=0;
	int end=n-1;
	while(start<=end){
		swap(a[start],a[end]);
		start++;
		end--;
	}
	int i;
	for(i=0;i<n;i++){
		cout<< a[i];
	}
}
int main(){

	int a[5]={1,2,3,4,5};
	float a1[5]={1.1,5.2,5.4,7.6,9.9};
	reverse_no(a,5);
	reverse_no(a1,5);
	return 0;
}

