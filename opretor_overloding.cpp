#include<iostream>
using namespace std;
class Complex{
	public:
		int real,img;
		Complex(int r,int i){
			real=r;
			img=i;
		}
		Complex operator +(Complex c4){
			Complex c5(0,0);
			c5.real=real+c4.real;
			c5.img=img+c4.img;
			return c5;
		}
		void display(){
				cout<<"Sum: "<<real<<" + "<<img<<"i";
		}
		
	
};
int main(){
	Complex c1(2,3);
	Complex c2(3,5);
	Complex c3=c1+c2;
	c3.display();
	
}
