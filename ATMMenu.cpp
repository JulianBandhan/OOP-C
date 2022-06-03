#include <iostream>
using namespace std;



void showMenu() {
	cout << "===== Menu ======" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Withdraw" << endl;
	cout << "3. Deposit" << endl;
	cout << "0. Exit" << endl;
	cout << "******************" << endl;
}

double account(double balance, double change) {
	balance += change;
	return balance;
}

void transactions() {
	int selected, whatdo = 0;
	double tran, balance = 50;

	while (whatdo == 0) {
		showMenu();
		cout << "What would you like to do? : ";
		cin >> selected;

		if (selected == 1) {
			cout << "Your Balance is $" << account(balance, 0.0) << endl;
			system("pause>0");
		}
		else if (selected == 2) {
			cout << "How much would you like to withdraw? : ";
			cin >> tran;
			double newbalance, transact = 0 - tran;
			if (tran > account(balance, 0.0)) {
				cout << "You too  poor for that." << endl;
			}
			else {
				newbalance = account(balance,transact);
				balance = newbalance;
				cout << "Your new balance is $" << newbalance << endl;
			}
		}
		else if (selected == 3) {
			cout << "How much would you like to deposit? : ";
			cin >> tran;
			double newbalance, transact = 0 + tran;
			newbalance = account(balance, transact);
			balance = newbalance;
			cout << "Your new balance is $" << newbalance << endl;
		}
		else {
			cout << "Get the  outta here" << endl;
			whatdo = 1;
		}
	}

	system("pause>0");
}

int main() {
	int epass, pass = 1234, counter = 0;
	

	while (counter < 3) {
		cout << "Enter your Bank Passcode: ";
		cin >> epass;
		system("cls");
		if (epass == pass) {
			transactions();
			counter = 4;
		}
		else {
			cout << " Wrong. You get " << 2 - counter << " more tries." << endl;
			counter++;
		}
	}
	cout << "Aite, get outta here.";
}

 

