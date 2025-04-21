#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int target=1;
	vector<int>vec={1,8,5,3,9,1,1,1,2};
	int c=count(vec.begin(),vec.end(),target);
	cout<<c;
	
}  
