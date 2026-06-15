#include "header.h"

int Account::accountCount = 0;
int Balance::balanceObjects = 0;
int ATM::atmCount = 0;

int main() {

	//Asking user to enter total number of ATM users

		int number;

	do {
		
		cout << "Enter number of ATM users: ";
		cin >> number;

		if (number <= 0) cout << "Invalid input. Please enter a positive value.\n";

	} while (number <= 0);

	//Creating array of objects with dynamic array(manually)
	ATM* atmArray = new ATM[number];

	//Asking user to fill info for every user of ATM
	for (int i = 0; i < number; i++){

		int card, pin;
		double balance;
		string name;

		cout << "\nEnter info for user " << i + 1 << '\n';

		cout << "Enter bank card: ";
		cin >> card;

		cout << "Enter account name: ";
		cin >> name;

		cout << "Enter PIN code: ";
		cin >> pin;

		cout << "Enter initial balance: ";
		cin >> balance;

		//Storing inputted values into objects
		atmArray[i] = ATM(card, name, pin, balance);
	}

	//Showing the state of user info before transactions
	cout << "\n- - - BEFORE TRANSACTIONS - - -\n";
	for (int i = 0; i < number; i++){
		cout << "\nUser " << i + 1 << ":\n";
		atmArray[i].print();
	}

	//Temporary variables for validation
	// - - - - - - -
	int index;
	double amount;
	// - - - - - - -

	cout << "\nEnter user index to deposit (1..." << number << "): ";
	cin >> index;

	//Validation process
	if (index >= 1 && index <= number){
		cout << "Enter deposit amount: ";
		cin >> amount;

		//Assigning amount of deposit for an exact user at index "index"
		atmArray[index - 1].deposit(amount);
	}

	else
		cout << "Invalid user index.\n";


	cout << "\nEnter user for withdrawal: (1..." << number << "): ";
	cin >> index;

	//Validation process
	if (index >= 1 && index <= number){
		cout << "Enter withdrawal amount: ";
		cin >> amount;

		//Assigning amount of withdraw for an exact user at index "index"

		bool success = atmArray[index - 1].withdraw(amount);

		if (!success) cout << "Must be > 0.\n";
	}

	else
		cout << "Invalid user index.\n";

	//Showing the state of user info before transactions
	cout << "\n- - - AFTER TRANSACTIONS - - -\n";
	for (int i = 0; i < number; i++){
		cout << "\nUser " << i + 1 << ":\n";
		atmArray[i].print();
	}

	//Information about static counters
	cout << "\n STATIC COUNTERS:\n";
	cout << "Total account objects: " << Account::getAccountCount() << '\n';
	cout << "Total balance objects: " << Balance::getBalanceObjectCount() << '\n';
	cout << "Total ATM objects    : " << ATM::getAtmCount() << '\n';



	return 0;
}