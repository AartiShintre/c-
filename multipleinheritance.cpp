#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void get1(){
			cout<<"enter 1st no";
			cin>>a;
		}
};
class B{
	public:
		int b;
		void get2(){
			cout<<"enter 2nd no";
			cin>>b;}
};
class C:public A,public B
{ 
	public:
		void add(){
			cout<<"addition:"<<a+b;
		}
};
int main()
{
	C obj;
	obj.get1();
	obj.get2();
	obj.add();
	return 0;
}
