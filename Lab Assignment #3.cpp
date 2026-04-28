#include <iostream>
using namespace std;

int main(){

 // =======  TASK 1  =======

double salary, tax;   //Salary and tax is in double format, so the calculation will be as precise as possible
 
cout << "  ===== TASK 1 =====\n";

cout << "Please, enter your salary: ";
cin >> salary;

if(salary < 1000){
    tax = 0;
}
if(salary >= 1001 && salary <= 2000){
 tax = (salary * 20) / 100;
}
if(salary >=2001 && salary <3000){
 tax = (salary * 30) / 100;
}
if(salary >= 3000){
 tax = (salary * 40) / 100;
}

cout << "Tax payable: " << tax << '\n';
cout << "Income after tax deducation: " << salary - tax << '\n';


 // =======  TASK 2  =======

double number;

cout << "\n  ===== TASK 2 =====\n";

cout << "Let's check whether a number is positive, negative or zero.\nPlease, enter a number: ";
cin >> number;

if(number > 0)
 cout << "Number " << number << " is positive.";
if(number < 0)
 cout << "Number " << number << " is negative.";
if(number == 0)
 cout << "It is zero!";
cout << '\n';


 // =======  TASK 3  =======

cout << "  ===== TASK 3 =====\n";

cout << "*****Steel grade checker*****" << '\n';

double hardness, carbon_content, tensile_strength;

cout << "Enter hardness: ";
cin >> hardness;

cout << "Enter carbon content: ";
cin >> carbon_content;

cout << "Enter tensile strength:";
cin >> tensile_strength;

if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
 cout << "Grade of steel: 10";
else if (hardness > 50 && carbon_content < 0.7)
 cout << "Grade of steel: 9";
else if (carbon_content < 0.7 && tensile_strength > 5600)
 cout << "Grade of steel: 8";
else if (hardness > 50 && tensile_strength > 5600)
 cout << "Grade of steel: 7";
else if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
 cout << "Grade of steel: 6";
else
 cout << "Grade of steel: 5";


return 0;
}