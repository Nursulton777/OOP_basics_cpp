#include "header.h"

int main() {

    //    STUDENT 1:
    StudentAccount student1;

    student1.setAccountNumber("cos-286753");
    student1.setStudentName("Patrick Maverick");
    student1.setUniversityID("U2711010");
    student1.setBalance(253);
    student1.setWithdraw(37);

    cout << "\tStudent 1:\n";

    cout << "Account Number: " << student1.getAccountNumber() << '\n';
    cout << "Student Name: " << student1.getStudentName() << '\n';
    cout << "University ID: " << student1.getUniversityID() << '\n';
    cout << "Balance: " << student1.getBalance() << '\n';
    cout << "Withdrawal amount: " << student1.getWithdraw() << '\n';
    cout << "Balance after withdrawal: " << student1.calculateFinalBalance();
    
    cout << '\n';


    //    STUDENT 2:
    StudentAccount student2;

    student2.setAccountNumber("cos-460530");
    student2.setStudentName("Squidward Dude");
    student2.setUniversityID("U2711065");
    student2.setBalance(378);
    student2.setWithdraw(82);

    cout << "\tStudent 2:\n";

    cout << "Account Number: " << student2.getAccountNumber() << '\n';
    cout << "Student Name: " << student2.getStudentName() << '\n';
    cout << "University ID: " << student2.getUniversityID() << '\n';
    cout << "Balance: " << student2.getBalance() << '\n';
    cout << "Withdrawal amount: " << student2.getWithdraw() << '\n';
    cout << "Balance after withdrawal: " << student2.calculateFinalBalance() << '\n';


    return 0;
}