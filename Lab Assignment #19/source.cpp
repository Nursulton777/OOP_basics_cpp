#include "header.h"

int main() {
	//Creating vector of base-class pointers
	vector<Hospital*> members;

	Doctor* doctor = new Doctor("Rustam", 31, 101, "Cardiologist", 4500);

	doctor->addPatient("Xojakbar");
	doctor->addPatient("Xolmurod");
	doctor->addPatient("Malika");

	members.push_back(doctor);

	Nurse* nurse = new Nurse("Omina", -47, 102, "Emergency ward", 2100);

	nurse->addDuties("Cleaning");
	nurse->addDuties("Look after patients");
	nurse->addDuties("Preparing for a surgery");

	members.push_back(nurse);

	Technician* technician = new Technician("Behruz", 53, -66, "IT Support", 300, 9);

	technician->addMachine("Air Conditioner");
	technician->addMachine("Projector");
	technician->addMachine("Grass peeler");

	members.push_back(technician);

	for (Hospital* member : members) {
	    member->display();
	    cout << "\n\n";
	}

	for (Hospital* member : members) {
	    delete member;
	}

	return 0;
}