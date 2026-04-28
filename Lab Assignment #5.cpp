#include <iostream>
using namespace std;
int main()
{

	// TASK 1

int integer, remainder;

do {
	cout << "Enter a positive integer: ";
	cin >> integer;

	if (integer <= 0)
		cout << "Invalid! Please, enter a positive integer.\n";
	
} while (integer <= 0);

int initial = integer;

int reverse = 0;

do {
	remainder = integer % 10;
	
	reverse = reverse * 10 + remainder;
	
	integer /= 10;

} while(integer != 0);

cout << "Reversed number of " << initial << " is: " << reverse << endl;


	// TASK 2

cout <<"\n\tMENU" << endl;

int add_mark, maximum = 0, choice;
double total = 0;

int counter = 0;

char y_n;

do {
	cout << "1.Add mark\n2.Show average\n3.Find highest mark\n4.Exit\nEnter your choice: ";
	cin >> choice;

	switch(choice){

	case 1:
		do {
			cout << "Enter a student's mark: ";
			cin >> add_mark;

			if (add_mark >= 0 && add_mark <= 100){
				total += add_mark;
				counter++;

				if(add_mark >= maximum){
					maximum = add_mark;
				}


				cout << "Mark added successfully!" << endl;
			}

			else {
				cout << "Invalid mark!" << endl;
			}
				cout << "Add another mark? (y/n): ";
				cin >> y_n; 

		} while (y_n == 'y' || y_n == 'Y');

	break;


	case 2:

		if (counter == 0){
			cout << "No valid mark is entered yet!" << endl;
		}
		else{
		cout << "Average mark = " << total / counter << endl;
		}

	break;


	case 3:

		if (counter == 0){
			cout << "No valid mark is entered yet!" << endl;
		}
		else{
		cout << "Highest mark = " << maximum << endl;
		}

	break;

    case 4: 
    	cout << "Thank you! Program ended.'" << endl;

    	break;

default:
	cout << "Please, enter only numbers between (1-4)." << endl;
	
	} // <- Switch multiple choice selection structure ends

} while (choice != 4);



	// TASK 3

int quantity_of_tickets, counter_of_cinemas = 0, total_tickets = 0;

for (int x = 1; x <= 5; x++){
	cout << "\nEnter tickets sold for show " << x << ": ";
	cin >> quantity_of_tickets;

	total_tickets += quantity_of_tickets;
}

cout << "-------------------------------\n";
cout << "Total tickets sold today: " << total_tickets << endl;


	// TASK 4

	// Draws a triangle pattern
for (int r = 1; r <= 5; r++){

	for (int i = 1; i <= 5 - r; i++){
		cout << " ";
	}
	for (int j = 1; j <= 2 * r - 1; j++){
		cout <<  "*";
	}
	cout << endl;
}


	// TASK 5
	
	// Draws a left-leaned triangle pattern using accending order of digits 1 to 5.
for (int r = 1; r <= 5; r++){

	for (int i = 1; i <= 5 - r; i++){
		cout << " ";
	}
	for (int j = 1; j <= r; j++){
		cout <<  j;
	}
	cout << endl;
}
    



return 0;

}