#include <iostream>
using namespace std;

int main() {

	//TASK 1
	int password;

	cout << "Enter a password: ";
	cin >> password;

	while (password != 77777) {
		cout << "Incorrect password! Try again: ";
		cin >> password;
	}
	if (password == 77777)
		cout << "Access granted!" << endl;


	//TASK 2
	int age, counter = 0, total = 0;

	cout << "Enter student age (-1 to stop): ";
	cin >> age;

	while (age != -1){
		if (age < 0){
			cout << "Invalid age. Please try again" << endl;
		}
		else {
			total =	total + age;
			counter++;
		}
		cout << "Enter student age (-1 to stop): ";
		cin >> age;
	}

	if (counter > 0)
		cout << "Average age = " << total / counter;
	else
		cout << "You didn't enter any valid age!";


    //TASK 3
    int number, digit, sum = 0;

    cout << "\nEnter a number: ";
    cin >> number;

    if(number < 0)
    	number = -number;

    while (number > 0){

    	digit = number % 10;

    	sum += digit;

    	number /= 10;
    }
    cout << "Sum of all digits = " << sum << endl;



return 0;
}