#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

void menu();
void addBook(string bookTitles[], string authors[], int year[], char status[], int &count);
void displayAllBooks(string bookTitles[], string authors[], int year[], char status[], int count);
void deleteBook(string bookTitles[], string authors[], int year[], char status[], int &count);
void searchBook(string bookTitles[], string authors[], int year[], char status[], int count);

int main() {

	string* bookTitles = new string[MAX];
	string* authors = new string[MAX];
	int* year = new int[MAX];
	char* status = new char[MAX];
	int choice, count = 0;

	do {

		menu();
		cin >> choice;

		switch (choice) {
		case 1:
			addBook(bookTitles, authors, year, status, count);
			break;
		case 2:
			displayAllBooks(bookTitles, authors, year, status, count);
			break;
		case 3:
			deleteBook(bookTitles, authors, year, status, count);
			break;
		case 4:
			searchBook(bookTitles, authors, year, status, count);
			break;
		case 5:
			cout << "Exiting...\nThank you, program ended!\n";
			break;
		default:
			cout << "Invalid input. Please try again\n";
		}

	} while (choice != 5);
}

void menu() {
	cout << "\n==== LIBRARY MANAGEMENT SYSTEM ====\n";
	cout << "1. Add book\n";
	cout << "2. Display all records\n";
	cout << "3. Delete book\n";
	cout << "4. Search book by author\n";
	cout << "5. Exit\n";
	cout << "Enter your choice: ";
}

void addBook(string bookTitles[], string authors[], int year[], char status[], int &count) {
	cout << "Enter book title: ";
	cin.ignore();
	getline(cin, bookTitles[count]);

	cout << "Enter author: ";
	getline(cin, authors[count]);

	do {
	cout << "Enter publication year: ";
	cin >> year[count];

	if (year[count] < 0 || year[count] > 2025)
		cout << "Invalid input for publication year!\n";
	} while (year[count] < 0 || year[count] > 2025);

	do {
	cout << "Enter availibility status(Y/N): ";
	cin >> status[count];

	if (status[count] != 'Y' && status[count] != 'y' && status[count] != 'N' && status[count] != 'n')
		cout << "Invalid input for publication year!\n";
	} while (status[count] != 'Y' && status[count] != 'y' && status[count] != 'N' && status[count] != 'n');

	count++;

	cout << "Book added successfully.\n";
}

void displayAllBooks(string bookTitles[], string authors[], int year[], char status[], int count) {

	cout << "\n==== ALL BOOK RECORDS ====\n";

	if (count == 0){
		cout << "No book is added yet!\n";
		return;
	}

	for (int i = 0; i < count; i++) {
		cout << "Index: " << i << '\n';
		cout << "Title: " << bookTitles[i] << '\n';
		cout << "Author: " << authors[i] << '\n';
		cout << "Publication year: " << year[i] << '\n';
		cout << "Availibility (Y = available, N = not available): " << status[i] << '\n';
		cout << " - - - - - - - - - - - - - - - - - - - -\n";
	}
}

void deleteBook(string bookTitles[], string authors[], int year[], char status[], int &count) {

	if (count == 0){
		cout << "No book is added yet!\n";
		return;
	}
	cout << "Enter the index of the book to delete (0..." << (count - 1) << "): ";
	int index;
	cin >> index;

	if (index < 0 || index >= count){
		cout << "Invalid index! Please try again.\n";
		return;
	}

	for (int i = index; i < (count - 1); i++) {
		bookTitles[i] = bookTitles[i + 1];
		authors[i] = authors[i + 1];
		year[i] = year[i + 1];
		status[i] = status[i + 1];
	}

	count--;

	cout << "Book deleted successfully!\n";
}

void searchBook(string bookTitles[], string authors[], int year[], char status[], int count){
	cout << "Enter author name to search: ";
	string author;
	cin.ignore();
	getline(cin, author);

	cout << "\nSearch results:\n";

	for (int i = 0; i < count; i++) {
		if (authors[i] == author){
			cout << "Index: " << i << '\n';
			cout << "Title: " << bookTitles[i] << '\n';
 			cout << "Author: " << authors[i] << '\n';
 			cout << "Publication year: " << year[i] << '\n';
 			cout << "Availibility: " << status[i] << '\n';
 			cout << " - - - - - - - - - - - - - - - - - - - -\n";
 			return;
 		}
	}

	cout << "Not found.\n";
}
