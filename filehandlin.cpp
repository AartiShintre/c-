#include<iostream>
#include<fstream>
using namespace std;
class Student{
	public:
		int roll;
		char name[20];
		int per;
		void write(){
			fstream f;
			f.open("student.txt",ios::app);
			cout<<"enter roll no,name,percentage";
			cin>>roll>>name>>per;
			f<<roll<<"\t"<<name<<"\t"<<per<<"\n";
			f.close();
		}
		void read(){
			fstream f;
			f.open("student.txt",ios::in);
			cout<<"Roll\tname\tper\n";
		while(f){
				f>>roll>>name>>per;
				cout<<roll<<"\t"<<name<<"\t"<<per<<"\n";
				
				
			}
			f.close();
					}
		
};
int main()
{
	Student s;
	s.write();
	s.read();
	return 0;
}
