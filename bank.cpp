#include <iostream>
using namespace std;

#define MAX 5  
int stack[MAX];
int top = -1; 
	int total=1000;
void credit(int value,int amt) {
    if (top == MAX - 1) {
        cout << "Stack Overflow" << endl;
    } else {
    
		total=total+value;
       stack[++top] = value;
	 
        cout << "credited" << value << " in account" <<"total value is"<<total<<endl;
       
    }
}

void debit() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "debited " << stack[top--] << " from account" << endl;
    }
}
void displayMenu() {
    int choice, value,amt=1000;

    do {
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. credited" << endl;
        cout << "2. debited" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to credit: ";
                cin >> value;
      
                credit(value,amt);
                break;
            case 2:
                debit();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        	
    } while (choice != 3);
}

int main() {
	int amt=1000;
	cout<<"your balance is"<<amt;
    displayMenu();
    return 0;
}
