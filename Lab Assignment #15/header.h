#include <iostream>
#include <string>
using namespace std;

class Account{

private:

	int bankCard;
	string accountName;
	int pinNumber;
	static int accountCount;

public:

	Account() : bankCard(0), accountName("Unknown"), pinNumber(0) {
		accountCount++;
	}

	Account(int bc, string an, int pn) : accountName(an) {
		setValues(bc, pn);
	}

	void setValues(int bc, int pn) {
		if (bc > 0) bankCard = bc;
		else {
			bankCard = 0;
			cout << "Invalid input for bank card number. Assigning to zero.\n";
		}

		if (pn >= 1000 && pn <= 9999) pinNumber = pn;
		else {
			pinNumber = 0;
			cout << "Invalid input for PIN number. Assigning to zero.\n";
		}
	}

	void display() const {
		cout << "Bank card: " << bankCard << '\n';
		cout << "Account name: " << accountName << '\n';
		cout << "PIN number: " << pinNumber << '\n';
	}

	static int getAccountCount() {
		return accountCount;
	}
};

class Balance{

private:

	double balance;
	static int balanceObjects;

public:

	Balance() : balance(0) {
		balanceObjects++;
	}

	Balance(double b){
		setBalance(b);
	}

	void setBalance(double b){
		if (b > 0) balance = b;
		else {
			balance = 0;
			cout << "Invalid input for balance. Assigning to zero.\n";
		}
	}

	void deposit(double amount) {
		if (amount > 0) balance += amount;
		else cout << "Invalid input for deposit amount, must be > 0. Assigning deposit to zero.\n";
	}

	bool withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			return true;
		}
		else{
			cout << "Invalid input for withdraw amount. Assigning to zero.\n";
			return false;
		}
	}

	void showBalance() const {
		cout << "Balance: " << balance << '\n';
	}

	static int getBalanceObjectCount() {
		return balanceObjects;
	}
};

class ATM{

private:

	Account account;
	Balance balance;
	static int atmCount;

public:

	ATM() : account(), balance() {
		atmCount++;
	}

	ATM(int card, string name, int pin, double balance) : account(card, name, pin), balance(balance) {
		atmCount++;
	}

	void print() const {
		account.display();
		balance.showBalance();
	}

	void deposit(double amount) {
		return balance.deposit(amount);
	}

	bool withdraw(double amount) {
		return balance.withdraw(amount);
	}

	static int getAtmCount() {
		return atmCount;
	}
};