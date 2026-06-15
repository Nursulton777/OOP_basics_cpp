#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	int age;
	char gender;

public:
	//Parametrized Constructor
	Person(string n, int a, char g) : name(n) {
		setPerson(a, g);
	}

	void setPerson(int a, char g) {

		//Age validation
		if (a > 0) age = a;

		else {
			cout << "Invalid input for age. Setting age to 0.\n";
			age = 0;
		}

		//Gender validation
		if (g == 'm' || g == 'M' || g == 'f' || g == 'F') gender = g;

		else {
			cout << "Invalid input for gender. Setting gender to 'U'.\n";
			gender = 'U';
		}
	}
	// Display function
	virtual void show() const {
		cout << "Name : " << name << '\n';
		cout << "Age : " << age << '\n';
		cout << "Gender : " << gender << '\n';
	}

	//Virtual destructor
	virtual ~Person() {}
};

class Student : public Person {
private:
	int IDnum;
	string subject;
	int grade;

public:
	//Parametrized Constructor
	Student(string n, int a, char gen, int i, string s, int g) : Person(n, a, gen), subject(s) {
		setStudent(i, g);
	}

	void setStudent(int i, int g) {
		//ID number validation
		if (i > 0) IDnum = i;
	
		else {
			cout << "Invalid input for ID number. Setting ID number to 0.\n";
			IDnum = 0;
		}

		//Grade validation
		if (g >= 0 && g <= 100) grade = g;

		else {
			cout << "Invalid input for grade. Setting grade to 0.\n";
			grade = 0;
		}
	}

	void show() const override {
		cout << "---- Student Information ----\n";
		cout << "Name : " << name << '\n';
		cout << "Age : " << age << '\n';
		cout << "Gender : " << gender << '\n';
		cout << "ID number : " << IDnum << '\n';
		cout << "Subject : " << subject << '\n';
		cout << "Grade : " << grade << '\n';
	}
};

class Teacher : public Person {
private:
	string courseInfo;

public:
	//Parametized Constructor
	Teacher(string n, int a, char gen, string c) : Person(n, a, gen) {
		setTeacher(c);
	}

	void setTeacher(string courseInfo){
		this->courseInfo = courseInfo;
	}

	void show() const override {
		cout << "---- Teacher Information ----\n";
		cout << "Name : " << name << '\n';
		cout << "Age : " << age << '\n';
		cout << "Gender : " << gender << '\n';
		cout << "Course info : " << courseInfo << '\n';
	}
};