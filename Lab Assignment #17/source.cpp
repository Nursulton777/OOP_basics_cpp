#include "header.h"

int main() {
	//********************************************
	//              STUDENT objects
	//********************************************
	Student student1("Xojiakbar", -19, 103, "Computer Science", 3.95, 12);
	student1.displayStudent();

	Student student2("Nig'matilla", 18, -129, "Software Engineering", 5.34, 4);
	student2.displayStudent();
	//-------------------------------------------

	//********************************************
	//              TEACHER objects
	//********************************************

	Teacher teacher1("Po'lat Berdiyev", 34, 107, "Linguistics",
	1730, "Academic English"); teacher1.displayTeacher();

	Teacher teacher2("Sarvar Abdullayev", 40, 111, "Computer Science",
	3500, "Introduction to IT"); teacher2.displayTeacher();
	//-------------------------------------------

	//********************************************
	//              STAFF objects
	//********************************************

	Staff staff1("John Wick", 42, 123, "Mechanic", 1200, 9);
	staff1.displayStaff();

	Staff staff2("Jay Cuttler", 55, 157, "Electrician", 1400, 5);
	staff2.displayStaff();
	//-------------------------------------------

	return 0; }