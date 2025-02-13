#include<iostream>
using namespace std;
class OuterClass{
	private:
		int a=10;
		public:
	class InnerClass{
	public:
			int b=100;
			void getInfo(){
				cout<<b<<endl;
			}
		
		
	};
		void getInfo(){
				cout<<a;
			}
	
};
int main()
{
	OuterClass out;
	OuterClass::InnerClass in;
	in.getInfo();
	out.getInfo();

	
	return 0;
 } 

