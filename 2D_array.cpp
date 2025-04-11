#include<iostream>
using namespace std;
int main(){
	int matrix[3][4]={{1,2,3,4},{3,4,5,6},{5,6,7,8}};
	int row=3;
	int cols=4;
	/*matrix[2][2]=11;
	cout<<matrix[2][2];*/
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
				cout<< matrix[i] [j];
		}
		cout<<endl;
	
	}
}
