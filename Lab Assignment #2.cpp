#include <iostream>
using namespace std;

int main() {
//==== TASK 1 ====

int num1, num2, num3;

cout << "Enter three numbers: ";

cout << "Enter number #1: ";
cin >> num1;

cout << "Enter number #2: ";
cin >> num2;

cout << "Enter number #3: ";
cin >> num3;

double sum = num1 + num2 + num3;

cout << "Sum: " << sum << endl;

cout << "Average: " << sum / 3 << endl;

cout << "Largest: ";

     if(num1 >= num2 && num1 >= num3){
     	cout << num1 << endl;
     }
     else if(num2 > num1 && num2 > num3){
        cout << num2 << endl;
     }
     else if(num3 > num1 && num3 > num2){
     	cout << num3 << endl;
     }


     cout << "Smallest: ";

     if(num1 <= num2 && num1 <= num3){
     	cout << num1;
     }
     else if(num2 < num1 && num2 < num3){
        cout << num2;
     }
     else if(num3 < num1 && num3 < num2){
     	cout << num3;
     }


//==== TASK 2 ====

int age, salary;

cout << "Enter age: ";
cin >> age;

cout << "Enter salary: ";
cin >> salary;

bool condition1 = (age > 21 && salary > 500);
cout << "Loan qualified: " << condition1 << endl;

bool condition2 = (age < 25 || salary < 300);
cout << "Student Discout qualified: " << condition2 << endl;
 


//==== TASK 3 ====

double total, cost, km_per_liter;

cout << "Enter total km driven per day: ";
cin >> total;

cout << "Enter cost per liter of gasoline: "; 
cin >> cost;

cout << "Enter average km per liter: ";
cin >> km_per_liter;

cout << "Total cost per day: " << (total / km_per_liter) * cost;


return 0;
}