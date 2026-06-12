#include <iostream>
using namespace std;

void menu();
void enterPatientData(int *p, int &count);
void displayAllRecords(int *p, int count);
void analyzeData(int *p, int count);
void sortPatient(int *p, int count);
void searchPatient(int *p, int count);

int main(){

    int option;
    int patientData[30], count = 0;
    int *p = patientData;

    do {
        menu();
        cin >> option;

        switch(option) {
        case 1:
            enterPatientData(p, count);
            break;
        case 2:
            displayAllRecords(p, count);
            break;
        case 3:
            analyzeData(p, count);
            break;
        case 4:
            sortPatient(p, count);
            break;
        case 5:
            searchPatient(p, count);
            break;
        case 6:
            cout << "Exiting...\n";
            cout << "Thank you program ended\n";
            break;
        default:
            cout << "Invalid choice. Please try again\n";
        }

    } while (option != 6);

    return 0;
}

void menu() {
    cout << "\n ==== HOSPITAL MANAGEMENT MONITORING SYSTEM ====\n";
    cout << "1. Enter patient data\n";
    cout << "2. Display all records\n";
    cout << "3. Analyze data\n";
    cout << "4. Sort patient\n";
    cout << "5. Search patient\n";
    cout << "6. Exit\n";
    cout << "Enter option: ";
}

void enterPatientData(int *p, int &count){
    cout << "\n < < < Enter patient data > > >\n";

    cout << "Enter number of patients: ";
    int number;
    cin >> number;

    if (number < 0){
        cout << "Invalid input. Please try again later\n";
        return;
    }

    

    if (number > 30){
        cout << "Unfortunately, maximum possible number of patients -- 30. Setting total number of patients to 30\n";
        number = 30;
    }

    for (int i = 0; i < number; i++){
        cout << "Enter heart rate for patient #" << i + 1 << ": ";
        cin >> *(p + i);

        count++;
    }

    cout << "Patient record(s) added successfully\n";
}

void displayAllRecords(int *p, int count) {

    if (count == 0){
        cout << "Error: No patient data is entered yet\n";
        return;
    }

    cout << "\n - - - - PATIENT RECORDS - - - -\n";

    for (int i = 0; i < count; i++){
        cout << "Patient " << i + 1 << ": heart rate = " << *(p + i) << ". Address = " << (p + i) << '\n';
    }
}

void analyzeData(int *p, int count) {

    if (count == 0){
        cout << "Error: No patient data is entered yet\n";
        return;
    }

    cout << "\n----- Data analysis -----\n";

    int highest = 0, lowest = 9999, total = 0;

    for (int i = 0; i < count; i++) {
        if (*(p + i) > highest)
            highest = *(p + i);

        if (*(p + i) < lowest)
            lowest = *(p + i);

        total += *(p + i);
    }

    cout << "Lowest heart rate:  " << lowest << '\n';
    cout << "Highest heart rate: " << highest << '\n';
    cout << "Average heart rate: " << double(total) / count << '\n';
}

void sortPatient(int *p, int count) {

    if (count == 0){
        cout << "Error: No patient data is entered yet\n";
        return;
    }

    cout << "Choose the sorting order:\n";
    cout << "1. Ascending\n";
    cout << "2. Descending\n";
    cout << "0. Exit (go back)\n";
    cout << "Enter: ";

    int input;
    cin >> input;

    int temp;

    switch (input) {
        case 1:
            // SORTING THE ARRAY USING 'BUBBLE SORT'
        
        for(int e = 0; e < count; e++){

            for (int i = 0; i < count - 1; i++){

                if (*(p + i) > *(p + i + 1)){
                    //swap
                    temp = *(p + i);
                    *(p + i) = *(p + i + 1);
                    *(p + i + 1) = temp;
                }
            }
        }
            cout << "Patient records sorted with ascending order successfully\n";
            break;
        case 2:
            // SORTING THE ARRAY USING 'BUBBLE SORT'

        for(int e = 0; e < count; e++){

            for (int i = 0; i < count - 1; i++){

                if (*(p + i) < *(p + i + 1)){
                    //swap
                    temp = *(p + i);
                    *(p + i) = *(p + i + 1);
                    *(p + i + 1) = temp;
                }
            }
        }
            cout << "Patient records sorted with descending order successfully\n";
            break;
        case 0:
            return;
        default:
            cout << "Invalid choice. Please try again later\n";
            break;
    }

}

void searchPatient(int *p, int count) {
    
    cout << "Enter heart rate to search: ";
    int heartRate;
    cin >> heartRate;

    if (heartRate <= 0){
        cout << "Invalid input. Please try again later\n";
        return;
    }

    for (int i = 0; i < count; i++){
        if (*(p + i) == heartRate){
            cout << "Heart rate " << heartRate << " found for patient #" << (i + 1) << '\n';
            return;
        }
    }

    cout << "Heart rate " << heartRate << " is not found!\n";
}

