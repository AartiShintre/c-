#include<iostream>
using namespace std;
int diagonal_sum(int matrix[][4],int n){
	int i,j;
	
int sum=0;
	for(i=0;i<n;i++){
	
		for(j=0;j<n;j++){
			if(i==j){
				sum=sum+matrix[i][j];
			}
			else if(j==n-i-1){
			
				sum=sum+matrix[i][j];
			}
		}
	
	}
		return sum;
}
int main(){
	int matrix[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,9},{1,2,3,4}};
	int n=4;
	cout<<diagonal_sum(matrix,n);
	return 0;
}
