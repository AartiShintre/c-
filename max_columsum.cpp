#include<iostream>
using namespace std;
int max_columsum(int matrix[][3],int row,int colum){
	int i,j;
	int max_colum=0;
	for(i=0;i<colum;i++){
		int colum_sum=0;
		for(j=0;j<row;j++){
			colum_sum=colum_sum+matrix[j][i];
		}
		max_colum=max(max_colum,colum_sum);
		
	}
	return max_colum;
}
int main()
{
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row=3;
	int colum=3;
	cout<<max_columsum(matrix,row,colum);
	return 0;
}
