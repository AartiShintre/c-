#include<iostream>
using namespace std;
class A{
	public:
			
		int a;
	void get()
		{
	
		cout<<"enter 1st number\n";
		cin>>a;
	}
		
};
class B:public A
{
	public:
		int b;
	void get2()
	{
	cout<<"enter 2nd number\n";
		cin>>b;
}
};
class C:public B
{
	public:
	void add(){
			cout<<"addition :"<<a+b;
	}

};
int main()
{
	C obj;
	obj.get();
	obj.get2();
	obj.add();
	return 0;
}

