#include<iostream>
using namespace std;
class Box{
	public:
	template<typename T>
T get_info(T a,T b,T c){

	int area=2*((a*b)+(b*c)+(c*a));
	return area;
}

};

int main(){
	Box b1;
	
	cout<<b1.get_info(1,2,3)<<endl;
	cout<<b1.get_info(1.1,2.2,3.3)<<endl;
}
