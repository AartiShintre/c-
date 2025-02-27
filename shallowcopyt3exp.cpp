#include<iostream>
using namespace std;
class demo{
	private:
		int*p;
	public:
		void getinfo(){
			cout<<*p<<endl;
		}
		void setinfo(int v){
			*this->p=v;
		}
		demo(int x){
			p=new int(x);
		}
		demo(const demo & obj){
			p=obj.p;//shallowcopy is used in this program
		}
		~demo(){
			delete p;
			cout<<"destructor is called"<<endl;
		}
};

int main(){
	demo d1(111);
	d1.getinfo();
	demo d2(d1);
	d2.getinfo();
	d2.setinfo(222);
	d2.getinfo();
	d2.~demo();
	d1.getinfo();
	
	return 0;
	
}
