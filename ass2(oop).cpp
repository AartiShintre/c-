#include<iostream>
using namespace std;
class Bank{
	public:
	string accountHolder;
	int accountNumber;
	string accountType;
	int balance;
	Bank(string accountHolder,int accountNumber,string accountType,int balance){
	
		this->accountHolder=accountHolder;
		this->accountNumber=accountNumber;
		this->accountType=accountType;
		this->balance=balance;
	
	}
	int getInfo(){
	cout<<accountHolder<<endl;
	cout<<accountNumber<<endl;
	cout<<accountType<<endl;
	cout<<balance<<endl;
	
	}
	int getDbalance(int damt){
		balance +=damt;
		cout<<"you total amount is:"<<balance<<endl;
		
	}
	int getWbalance(int Wamt){
		balance -=Wamt;
		cout<<"you total amount is:"<<balance<<endl;
		
	}

	
};
int main(){
	Bank b1("arti shintre",2504,"current",250000);
	b1.getInfo();
	
	int damt;
	cout<<"enter deposite ammount";
	cin>>damt;
	b1.getDbalance(damt);
		int Wamt;
	cout<<"enter withdraw ammount";
	cin>>Wamt;
	b1.getWbalance(Wamt);
	b1.getInfo();
	return 0;
}
