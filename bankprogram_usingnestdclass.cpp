#include<iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    Bank(int amt) {
        balance = amt;
    }
    class Transaction {
    private:
        int deposite_amt = 500;
        int withdraw_amt=200;
        int total_amt;

    public:
        void getInfo() {
            cout << "Deposited: " << deposite_amt << endl;
        }
        void getInfo2(int balance) {
            total_amt = balance + deposite_amt; // Use balance from the outer class
            cout << "Total amount: " << total_amt << endl;
        }
        void getInfo3(){
        	total_amt=total_amt-withdraw_amt;
        	 cout << "Total amount: " << total_amt << endl;
        	
		}
    };
    int getBalance() {
        return balance;
    }

    void getInfo() {
        cout << "Initial amount: " << balance << endl;
    }
};

int main() {
    Bank b(1000);  
    b.getInfo();  

    Bank::Transaction t;
    t.getInfo();  

    t.getInfo2(b.getBalance());  
    t.getInfo3();

    return 0;
}

