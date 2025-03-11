#include<iostream>
using namespace std;
int main(){
	int n=7;
int a[n]{1,2,3,4,2,2};
    int freq=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(freq==0)
        {
           ans=a[i];
        }
        if(ans==a[i]){
            freq++;
        }
        else{
            freq--;
        }
      
    }
    cout<< ans;
    }
