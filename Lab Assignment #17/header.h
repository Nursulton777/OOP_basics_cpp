#include <iostream>
#include <string>
using namespace std;

class Person{

protected:
	string name;
	int age;
	int id;

public:

	Person(string n, int a, int i) : name(n) {
		setPerson(a, i);
	}

	void setPerson(int a, int i){

		if (a >= 0) age = a;

		else{
			cout << "Invalid input for age! Please try again.\n";
			int tempAge;

			do {
				cout << "Enter your age: ";
				cin >> tempAge;
				if (tempAge < 0) cout << "Invalid input for age! Please try again.\n";
			} while (tempAge < 0);

			age = tempAge;
		}

		if (i >= 0) id = i;

		else{
			cout << "Invalid input for ID! Please try again.\n";
			int tempId;

			do {
				cout << "Enter your ID: ";
				cin >> tempId;
				if (tempId < 0) cout << "Invalid input for ID! Please try again.\n";
			} while (tempId < 0);

			id = tempId;
		}

	}

	void displayPerson() const {
		cout << "Name: " << name << '\n';
		cout << "Age: " << age << '\n';
		cout << "ID: " << id << '\n';
	}
	
};

class Student : public Person{

private:
	string major;
	double gpa;
	int semester;

public:

	Student(string n, int a, int i, string m, double g, int s) : Person(n, a, i), major(m) {
		setStudent(g, s);
	}

	void setStudent(double g, int s) {

		if (g >= 0 && g <= 4.0) gpa = g;

		else{
			cout << "Invalid input for GPA in Student details! Please try again.\n";
			double tempGpa;

			do {
				cout << "Enter your gpa: ";
				cin >> tempGpa;
				if (tempGpa < 0 || tempGpa > 4.0) cout << "Invalid input for GPA! Please try again.\n";
			} while (tempGpa < 0 || tempGpa > 4.0);

			gpa = tempGpa;
		}

		if (s >= 1 && s <= 8) semester = s;

		else{
			cout << "Invalid input for semester in Student details! Please try again.\n";
			int tempSemester;

			do {
				cout << "Enter your semester: ";
				cin >> tempSemester;
				if (tempSemester < 0 || tempSemester > 8) cout << "Invalid input for semester! Please try again.\n";
			} while (tempSemester < 0 || tempSemester > 8);

			semester = tempSemester;
		}
	}

	void displayStudent() const {
		cout << "\n- - - - Student Details - - - -\n";
		displayPerson();
		cout << "Major: " << major << '\n';
		cout << "GPA: " << gpa << '\n';
		cout << "Semester: " << semester << '\n';

	}
};

class Teacher : public Person{

private:
	string department;
	double salary;
	string subject;

public:
	Teacher(string n, int a, int i, string d, double s, string sub) : Person(n, a, i), department(d), subject(sub) {
		setTeacher(s);
	}

	void setTeacher(double s) {

		if (s >= 0) salary = s;

		else{
			cout << "Invalid input for salary in Teacher details! Please try again.\n";
			int tempSalary;

			do {
				cout << "Enter your salary: ";
				cin >> tempSalary;
				if (tempSalary < 0) cout << "Invalid input for salary! Please try again.\n";
			} while (tempSalary < 0);

			salary = tempSalary;
		}

	}

	void displayTeacher() const {
		cout << "\n- - - - Teacher Details - - - -\n";
		displayPerson();
		cout << "Department: " << department << '\n';
		cout << "Salary: $" << salary << '\n';
		cout << "Subject: " << subject << '\n';
	}
};

class Staff : public Person{
private:
	string position;
	double monthlySalary;
	int workingHours;

public:
	Staff(string n, int a, int i, string p, double m, int w) : Person(n, a, i), position(p) {
		setStaff(m, w);
	}

	void setStaff(double m, int w) {
		if (m >= 0) monthlySalary = m;

		else{
			cout << "Invalid input for salary in Staff details! Please try again.\n";
			int tempSalary;

			do {
				cout << "Enter your monthly salary: ";
				cin >> tempSalary;
				if (tempSalary < 0) cout << "Invalid input for salary! Please try again.\n";
			} while (tempSalary < 0);

			monthlySalary = tempSalary;
		}

		if (w >= 0) workingHours = w;

		else{
			cout << "Invalid input for working hours in Staff details! Please try again.\n";
			int tempHours;

			do {
				cout << "Enter your salary: ";
				cin >> tempHours;
				if (tempHours < 0) cout << "Invalid input for salary! Please try again.\n";
			} while (tempHours < 0);

			workingHours = tempHours;
		}
	}

	void displayStaff() const {
		cout << "\n- - - - Staff Details - - - -\n";
		displayPerson();
		cout << "Position: " << position << '\n';
		cout << "Monthly salary: $" << monthlySalary << '\n';
		cout << "Working hours: " << workingHours << '\n';
	}
};