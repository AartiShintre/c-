#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str="daabcbaabcbc";
	string part="abc";
	while(str.length()>0&&str.find(part)<str.length()){
		str.erase(str.find(part),part.length());
	}
	for(int i=0;i<str.length();i++){
		cout<<str[i];
	}
	
	
}
