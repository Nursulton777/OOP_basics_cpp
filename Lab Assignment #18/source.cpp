#include "header.h"

int main() {
	Person* array[4];

	array[0] = new Student("Nursulton", 18, 'P', 2510062, "Pyhsics Experiment", 102);
	array[1] = new Teacher("Suvanov Sharof", 38, 'M', "Object Orientred Programming");
	array[2] = new Student("Nurmuhammad", -888, 'm', -21, "Creative Engineering Design", 90);
	array[3] = new Teacher("Umida Ubaydullayeva", -30, 'f', "Academic English");

	//Printing objects;
	for (int i = 0; i < 4; i++) {
		array[i]->show();
	}

	for (int i = 0; i < 4; i++) {
		delete array[i];
		array[i] = nullptr;
	}

	return 0;
}