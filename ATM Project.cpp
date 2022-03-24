
//program description: build an ATM program which allows users to deposit, withdraw, and check balance for their money
#include <iostream>
#include <iomanip>
using namespace std;
double Withdraw_Money = 0;
double Deposit_Money = 100;

//program description: build an ATM program which allows users to deposit, withdraw, and check balance for their money
void showMenu() {
	cout << "Welcome to the Bank ATM! " << endl;
	cout << "************************ " << endl;
	cout << "1: Deposit Money " << endl;
	cout << "2: Withdraw Money " << endl;
	cout << "3: Check Balance " << endl;
	cout << "4: Exit " << endl;
}
void depositMoney () {

	cout << "Enter the deposit amount: ";
	cin >> Deposit_Money;
	cout << "You deposited " << "$" << Deposit_Money << ".00 " << endl;
}
void withdrawMoney () {

	cout << "Please enter the withdraw amount: ";
	cin >> Withdraw_Money;
	cout << "You withdrew " << "$" << Withdraw_Money << ".00 " << endl;
}
void checkBalance () {
	double checkBalance = 0;
	checkBalance = Deposit_Money - Withdraw_Money;
	cout << "Your bank balance is " << "$" << checkBalance << ".00 " << endl;
}

int main ()
{
	showMenu();
	int choice;
	do {
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice) {
	    case 1: depositMoney();
	             break;
	    case 2: withdrawMoney();
	            break;
	    case 3: checkBalance();
	            break;
	    case 4: exit(0);
	            break;
	    default:
	    cout << "Invalid choice. Please enter another choice.";
	}
}while(choice > 0 );
}
