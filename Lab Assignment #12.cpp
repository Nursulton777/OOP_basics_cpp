#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string faculty;
    double gpa;
    string contact;
};

const int MAX = 30;

void menu();
void addStudent(Student array[], int& studentCount);
void displayStudents(Student array[], int studentCount);
void findStudent(Student array[], int studentCount);
void updateStudent(Student array[], int studentCount);
void deleteStudent(Student array[], int& studentCount);

int main() {

    Student array[MAX];
    int studentCount = 0;
    int choice;

    do {

        menu();
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent(array, studentCount);
            break;

        case 2:
            displayStudents(array, studentCount);
            break;

        case 3:
            findStudent(array, studentCount);
            break;

        case 4:
            updateStudent(array, studentCount);
            break;

        case 5:
            deleteStudent(array, studentCount);
            break;

        case 6:
            cout << "Exiting...\n";
            cout << "Thank you, program ended!\n";
            break;

        default:
            cout << "Invalid input. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}

void menu() {
    cout << "\n===== STUDENT DATABASE MENU =====\n";
    cout << "1. Add a new student\n";
    cout << "2. Display all students\n";
    cout << "3. Search for a student\n";
    cout << "4. Update student information\n";
    cout << "5. Delete a student record\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

void addStudent(Student array[], int& studentCount) {

    if (studentCount >= MAX) {
        cout << "Database is full!\n";
        return;
    }

    cout << "\n--- Add New Student ---\n";

    do {
        cout << "Enter student ID: ";
        cin >> array[studentCount].id;

        if (array[studentCount].id < 0)
            cout << "Invalid input. Please try again.\n";

    } while (array[studentCount].id < 0);

    cin.ignore();

    cout << "Enter full name: ";
    getline(cin, array[studentCount].name);

    cout << "Enter faculty: ";
    getline(cin, array[studentCount].faculty);

    do {
        cout << "Enter GPA: ";
        cin >> array[studentCount].gpa;

        if (array[studentCount].gpa < 0 || array[studentCount].gpa > 4.5)
            cout << "Invalid GPA. Must be between 0 and 4.5.\n";

    } while (array[studentCount].gpa < 0 || array[studentCount].gpa > 4.5);

    cin.ignore();

    cout << "Enter contact (phone/email): ";
    getline(cin, array[studentCount].contact);

    studentCount++;

    cout << "Student added successfully.\n";
}

void displayStudents(Student array[], int studentCount) {

    if (studentCount == 0) {
        cout << "No students found.\n";
        return;
    }

    cout << "\n****** STUDENTS LIST ******\n";

    for (int i = 0; i < studentCount; i++) {

        cout << "\nStudent #" << i + 1 << '\n';
        cout << "ID: " << array[i].id << '\n';
        cout << "Name: " << array[i].name << '\n';
        cout << "Faculty: " << array[i].faculty << '\n';
        cout << "GPA: " << array[i].gpa << '\n';
        cout << "Contact: " << array[i].contact << '\n';
        cout << "-----------------------------------\n";
    }
}

void findStudent(Student array[], int studentCount) {

    if (studentCount == 0) {
        cout << "No students found.\n";
        return;
    }

    cout << "\n--- Student Search ---\n";
    cout << "1. Search by ID\n";
    cout << "2. Search by Name\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1) {

        int id;

        cout << "Enter student ID: ";
        cin >> id;

        for (int i = 0; i < studentCount; i++) {

            if (array[i].id == id) {

                cout << "\nStudent found:\n";
                cout << "ID: " << array[i].id << '\n';
                cout << "Name: " << array[i].name << '\n';
                cout << "Faculty: " << array[i].faculty << '\n';
                cout << "GPA: " << array[i].gpa << '\n';
                cout << "Contact: " << array[i].contact << '\n';

                return;
            }
        }

        cout << "Student not found!\n";
    }
    else if (choice == 2) {

        string name;

        cin.ignore();

        cout << "Enter student name: ";
        getline(cin, name);

        for (int i = 0; i < studentCount; i++) {

            if (array[i].name == name) {

                cout << "\nStudent found:\n";
                cout << "ID: " << array[i].id << '\n';
                cout << "Name: " << array[i].name << '\n';
                cout << "Faculty: " << array[i].faculty << '\n';
                cout << "GPA: " << array[i].gpa << '\n';
                cout << "Contact: " << array[i].contact << '\n';

                return;
            }
        }

        cout << "Student not found!\n";
    }
    else {
        cout << "Invalid choice.\n";
    }
}

void updateStudent(Student array[], int studentCount) {

    if (studentCount == 0) {
        cout << "No students found.\n";
        return;
    }

    cout << "\n--- Update Student ---\n";

    int id;
    cout << "Enter student ID to update: ";
    cin >> id;

    int index = -1;

    for (int i = 0; i < studentCount; i++) {
        if (array[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Student not found!\n";
        return;
    }

    cout << "\nCurrent Information:\n";
    cout << "ID: " << array[index].id << '\n';
    cout << "Name: " << array[index].name << '\n';
    cout << "Faculty: " << array[index].faculty << '\n';
    cout << "GPA: " << array[index].gpa << '\n';
    cout << "Contact: " << array[index].contact << '\n';

    int choice;

    do {

        cout << "\n1. Name\n";
        cout << "2. Faculty\n";
        cout << "3. GPA\n";
        cout << "4. Contact\n";
        cout << "5. Finish Updating\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {

        case 1:
            cin.ignore();
            cout << "Enter new name: ";
            getline(cin, array[index].name);
            cout << "Name updated!\n";
            break;

        case 2:
            cin.ignore();
            cout << "Enter new faculty: ";
            getline(cin, array[index].faculty);
            cout << "Faculty updated!\n";
            break;

        case 3: {
            double gpa;

            cout << "Enter new GPA: ";
            cin >> gpa;

            if (gpa >= 0 && gpa <= 4.5) {
                array[index].gpa = gpa;
                cout << "GPA updated!\n";
            }
            else {
                cout << "Invalid GPA!\n";
            }

            break;
        }

        case 4:
            cin.ignore();
            cout << "Enter new contact information: ";
            getline(cin, array[index].contact);
            cout << "Contact updated!\n";
            break;

        case 5:
            cout << "Finished updating.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);
}

void deleteStudent(Student array[], int& studentCount) {

    if (studentCount == 0) {
        cout << "No students to delete.\n";
        return;
    }

    cout << "\n--- Delete Student ---\n";

    int id;

    cout << "Enter ID to delete: ";
    cin >> id;

    int index = -1;

    for (int i = 0; i < studentCount; i++) {

        if (array[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Student not found!\n";
        return;
    }

    for (int i = index; i < studentCount - 1; i++) {

        array[i].id = array[i + 1].id;
        array[i].name = array[i + 1].name;
        array[i].faculty = array[i + 1].faculty;
        array[i].gpa = array[i + 1].gpa;
        array[i].contact = array[i + 1].contact;
    }

    studentCount--;

    cout << "Student deleted successfully.\n";
}