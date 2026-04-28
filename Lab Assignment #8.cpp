#include <iostream>
using namespace std;

void menu();

int g_c_d(int num1, int num2);

int addBonus(int &grade, int bonus);

double withdraw(double &balance, double amount);


int main(){

    short choice;
    int num1, num2;
    double balance, amount;
    int grade, bonus;

    do {
        menu();
        cin >> choice;

        switch(choice){
        case 1:
            do {
                cout << "Enter two positive integers: ";
                cin >> num1 >> num2;

                if (num1 <= 0 || num2 <= 0)
                    cout << "Invalid data! Try again.\n";
                else
                    cout << "G.C.D is: " << g_c_d(num1, num2) << endl;

            }while (num1 <= 0 || num2 <= 0);
            break;

        case 2:
            do{
                cout << "Enter current balance: ";
                cin >> balance;
                if (balance < 0)
                    cout << "Invalid data! Try again.\n"; 
            }while (balance < 0);

            do{
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount < 0 || amount > balance)
                    cout << "Invalid data! Try again.\n";

            } while(amount < 0 || amount > balance);

            cout << "Remaining balance: " << withdraw(balance, amount) << endl;
            break;

        case 3:
            do{
                cout << "Enter current grade (0--100): ";
                cin >> grade;

                if (grade < 0 || grade > 100)
                    cout << "Invalid data! Try again.\n";

            } while(grade < 0 || grade > 100);

        cout << "Enter bonus points: ";
        cin >>bonus;

        cout << "Bonus applied!\n";
        cout << "Updated grade: " << addBonus(grade, bonus) << endl;
        break;

        case 4:
        cout << "Thank you! Programm ended.\n";
        break;

        default:
        cout << "Invalid choice! Try again.\n";
        break;

        }

    }while(choice != 4);

}

void menu(){
    cout << "  ===== MENU =====\n";
    cout << "1) G.C.D\n";
    cout << "2) Banking\n";
    cout << "3) Grading\n";
    cout << "4) Exit\n";
    cout << "Choose an option: ";
}

int g_c_d(int num1, int num2){
    if (num2 == 0)
        return num1;
    else
        return g_c_d(num2, num1 % num2);
}

double withdraw(double &balance, double amount){
    balance -= amount;
    return balance;
}

int addBonus(int &grade, int bonus){
    grade += bonus;
    return grade;
}
