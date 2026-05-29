#include <iostream>
using namespace std;

const int capacity = 100;

void menu();
void addStudent(long students[], int &count);
void insertStudent(long students[], int &count);
void deleteStudent(long students[], int &count);
void searchStudent(long students[], int count);
void sortStudents(long students[], int &count);
void displayStudents(long students[], int &count);


int main() {
    int option;
    long students[capacity];
    int count = 0;


    do {
        menu();
        cin >> option;

        switch (option) {
            case 1:
                addStudent(students, count);
                break;
            case 2:
                insertStudent(students, count);
                break;
            case 3:
                deleteStudent(students, count);
                break;
            case 4:
                searchStudent(students, count);
                break;
            case 5:
                sortStudents(students, count);
                break;
            case 6:
                displayStudents(students, count);
                break;
            case 7:
                cout << "Exiting...\nThank you program ended\n";
            default:
                cout << "Invalid choice. Please try again.\n";
        }


    } while(option != 7);

}


void menu() {
    cout << "\n===== Student ID Manager =====\n";
    cout << "1. Add student\n";
    cout << "2. Insert student\n";
    cout << "3. Delete student\n";
    cout << "4. Search student\n";
    cout << "5. Sort students by ID\n";
    cout << "6. Display all student\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

void addStudent(long students[], int &count){
    long id;

    cout << "Enter student ID: ";
    cin >> id;

    if (id > 0){
        students[count] = id;
        count++;
        cout << "Student added successfully\n";
        return;
    }
    
    cout << "Invild number for ID. Must be > 0\n";
}

void insertStudent(long students[], int &count) {
    if (count == 0){
        cout << "No student is entered to the list. "
             << "Enter student in a typical way\n";
             return;
    }

    cout << "Enter position: ";
    int position;
    cin >> position;

    if (position < 1 || position > count){
        cout << "Invalid position!\n";
        return;
    }

    count++;

    for (int i = (count - 1); i > (position - 1); i--) {
        students[i] = students[i - 1];
    }

    cout << "Enter student ID: ";
    long id;
    cin >> id;

    students[position - 1] = id;
}

void deleteStudent(long students[], int &count) {
    if (count == 0){
        cout << "No student is entered to the list yet.\n";
        return;
    }

    int position;

    cout << "Enter position: ";
    cin >> position;

    if (position >= 1 && position <= count){

        for (int i = (position - 1); i < (count - 1); i++){
            students[i] = students[i + 1];
        }

        count--;
    }

    cout << "Student deleted successfully\n";
}

void searchStudent(long students[], int count) {
    long id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++){
        if (students[i] == id){
            cout << "Student is found at position - " << i + 1 << " with ID : " << students[i] << '\n';
            return;
        }
    }

    cout << "Student not found.\n";
}

void sortStudents(long students[], int &count) {

    if (count == 0){
        cout << "No student is entered to the list\n";
        return;
    }

    long temp;

    for (int j = 0; j < count - 1; j++) {
        for (int i = 0; i < count - 1; i++) {
            if (students[i] > students[i + 1]){
                temp = students[i];
                students[i] = students[i + 1];
                students[i + 1] = temp;
            }
        }
    }

    cout << "Students sorted with acsending order successfully\n";
} 

void displayStudents(long students[], int &count) {
    cout << "- - - - Students - - - -\n";

    if (count == 0){
        cout << "No student is entered to the list\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "Student #" << i + 1 << " - " << students[i] << '\n';
    }
}