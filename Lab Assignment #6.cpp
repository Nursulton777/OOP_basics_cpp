#include <iostream>
using namespace std;

void convertTime(int totalSeconds, int minutes, int hours, int remainder_seconds);

void convert(double amount, double rate, char y_n1);

void displayResult(int choice,double unit_price, double total, double quantity,
                  double discount1, double total1, double discount, char y_n2);


int main(){


		//TASK 1

int totalSeconds, minutes, hours, remainder_seconds;


	// TASK 2

double amount, rate;

char y_n1;


	// TASK 3

int choice;
double unit_price, quantity, discount1, total1 = 0, total = 0,discount = 0;
char y_n2;





convertTime(totalSeconds, minutes, hours, remainder_seconds);

convert(amount, rate, y_n1);

displayResult(choice, unit_price, quantity, discount1, total1, total, discount, y_n2);


return 0;
}


		// TASK 1


void convertTime(int totalSeconds, int minutes, int hours, int remainder_seconds){

	do {
		cout << "Enter total seconds: ";
		cin >> totalSeconds;

		if (totalSeconds < 0){
			cout << "Please enter a non-negative number of seconds." << endl;
		}
	} while(totalSeconds < 0);


	hours = totalSeconds / 3600;

	remainder_seconds = totalSeconds % 3600;

	minutes =remainder_seconds / 60;

	totalSeconds = remainder_seconds % 60;

cout << hours << " hour " << minutes << " minute " << totalSeconds << " seconds" << endl;

}


		// TASK 2


void convert(double amount, double rate, char y_n1){

	do {
	cout << "Enter amount: ";
	cin >> amount;

	cout << "Enter exchange rate: ";
	cin >> rate;

	cout << "Converted amount: " << amount * rate << endl;

	cout << "Do another conversion? (y/n): ";
	cin >> y_n1;

} while (y_n1 == 'y' || y_n1 == 'Y');

cout << "Thank you! Programm ended." << endl;

}


		// TASK 3


void displayResult(int choice,double unit_price, double total, double quantity,
                  double discount1, double total1, double discount, char y_n2){

	do {
	cout << "===== BILLING SYSTEM =====" << endl;
	cout << "1. Add items\n2. Show totals\n3. Exit" << endl;

	cout << "Enter your choice: ";
	cin >> choice;
	cout << '\n';

	switch(choice){

	case 1:
	do {

		cout << "Unit price: ";
		cin >> unit_price;

		cout << "Quantity: ";
		cin >> quantity;

		cout << "Item discount(% 0-100): ";
		cin >> discount1;

		total1 = unit_price * quantity;
		discount1 = total1 * (discount1 / 100);
		total += total1;
		discount += discount1;

		cout << "Added -> total = " << total1 << ", discount = " << discount1 
			 << ", Total after dicount = " << total1 - discount1 << endl;

		cout << "Add another item? (y/n): ";
		cin >> y_n2;

		cout << '\n';
	} while (y_n2 == 'y' || y_n2 == 'Y');

	break;


	case 2:

		if (quantity == 0 || total1 == 0){
			cout << "No valid item!\n\n";
		}

		else{
			cout << "Total (before discounts): " << total << endl
			 << "Total discounts\t: - " << discount << endl
			 << "Total (to pay)\t: " << total - discount << "\n\n";
			}

	break;


	case 3:
		cout << "Thank you program ended. Exiting...\n";
		break;


	default:
		cout << "Enter a valid input (1 - 2)!";

	} // end of switch

	} while (choice != 3);

}