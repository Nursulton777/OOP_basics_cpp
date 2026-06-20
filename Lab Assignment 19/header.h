#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Hospital{
protected:
	string name;
	int age;
	int id;

public:
	//Parametrized Constructor
	Hospital(string n, int a, int i) : name(n) {
		setHospital(a, i);
	}

	void setHospital(int a, int i) {
		//Age Validation
		if (a > 0) age = a;

		else {
			cout << "Invalid input for age! Setting age to 0.\n";
			age = 0;
		}

		//ID Validation
		if (i > 0) id = i;

		else {
			cout << "Invalid input for ID. Setting ID to 0.\n";
			id = 0;
		}
	}

	virtual void display() const = 0;
	virtual double calculateSalary() const = 0;
	virtual ~Hospital() {}
};

class Doctor : public Hospital {
private:
	string specialization;
	double monthlySalary;
	vector<string> patients;

public:
	//Parametrized Constructor
	Doctor(string n, int a, int i, string s, double ms) : Hospital(n, a, i), specialization(s) {
		setDoctor(ms);
	}

	void setDoctor(double ms) {
		//Monthly salary validation
		if (ms > 0) monthlySalary = ms;

		else {
			cout << "Invalid input for monthly salary! Setting salary to 0.\n";
			monthlySalary = 0;
		}
	}

	void display() const override {
		cout << "Name: " << name << '\n';
		cout << "Age: " << age << '\n';
		cout << "ID: " << id << '\n';
		cout << "Specialization: " << specialization << '\n';
		cout << "Monthly salary: $" << monthlySalary << '\n';
		cout << "Patients: ";

		for (string patient : patients) {
			cout << patient << ", ";
		}
	}

	double calculateSalary() const override {
		return monthlySalary;
	}

	void addPatient(string patient) {
		patients.push_back(patient);
	}
};

class Nurse : public Hospital {
private:
	string ward;
	double monthlySalary;
	vector<string> duties;

public:
	Nurse(string n, int a, int i, string w, double ms) : Hospital(n, a, i), ward(w) {
		setNurse(ms);
	}

	void setNurse(double ms) {
		//Monthly salary validation
		if (ms > 0) monthlySalary = ms;

		else {
			cout << "Invalid input for monthly salary! Setting salary to 0.\n";
			monthlySalary = 0;
		}
	}

	void display() const override {
		cout << "Name: " << name << '\n';
		cout << "Age: " << age << '\n';
		cout << "ID: " << id << '\n';
		cout << "Ward: " << ward << '\n';
		cout << "Monthly salary: $" << monthlySalary << '\n';
		cout << "Duties: ";

		if (duties.size() == 0) cout << "None\n";
		
		else {
			for (string duty : duties) {
				cout << duty << ", ";
			}
		}
	}

	double calculateSalary() const override {
		return monthlySalary;
	}

	void addDuties(string duty) {
		duties.push_back(duty);
	}
};

class Technician : public Hospital {
private:
	string labType;
	double hourlyRate;
	int workingHours;
	vector<string> machinesHandled;

public:
	Technician(string n, int a, int i, string l, double hr, int wh) : Hospital(n, a, i), labType(l) {
		setTechnician(hr, wh);
	}

	void setTechnician(double hr, int wh) {
		//Hourly Rate validation
		if (hr > 0) hourlyRate = hr;

		else {
			cout << "Invalid input for Hourly Rate! Setting hourly rate to 0.\n";
			hourlyRate = 0;
		}
		//Working hours validaton
		if (wh > 0) workingHours = wh;

		else {
			cout << "Invalid input for working hour! Setting working hours to 0.\n";
			workingHours = 0;
		}
	}

	void display() const override {
		cout << "Name: " << name << '\n';
		cout << "Age: " << age << '\n';
		cout << "ID: " << id << '\n';
		cout << "Lab type: " << labType << '\n';
		cout << "Working hours: " << workingHours << '\n';
		cout << "Hourly rate: " << hourlyRate << '\n';
		cout << "Salary: $" << calculateSalary() << '\n';
		cout << "Machines handled: ";

		if (machinesHandled.size() == 0) cout << "None" << '\n';

		else {
			for (string machine : machinesHandled) {
				cout << machine << ", ";
			}
		}
	}

	double calculateSalary() const override {
		return hourlyRate * workingHours;
	}

	void addMachine(string machine) {
		machinesHandled.push_back(machine);
	}
};