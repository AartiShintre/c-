#include<iostream>
using namespace std;
int max_sum(int matrix[][3],int row,int colum){
	int i,j;
	int max_rowsum=0;
	for(i=0;i<row;i++){
			int row_sum=0;
		
		for(j=0;j<colum;j++){
			row_sum=row_sum+matrix[i][j];
		}
		max_rowsum=max(row_sum,max_rowsum);
		
	}
	return max_rowsum;
}
int main(){
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row=3;
	int colum=3;
cout<<max_sum(matrix,row,colum);
	return 0;
}
