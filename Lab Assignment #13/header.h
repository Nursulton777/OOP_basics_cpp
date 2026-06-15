#include <iostream>
#include <string>
using namespace std;

class StudentAccount{

    private:
        string accountNumber;
        string studentName;
        string universityID;
        double balance;
        double withdraw;

    public:

    //SETTER FUNCTIONS
        void setAccountNumber(string number) {
            accountNumber = number;
        }

        void setStudentName(string name) {
            studentName = name;
        }

        void setUniversityID(string id) {
            universityID = id;
        }

        void setBalance(double balance) {
            this->balance = balance;
        }

        void setWithdraw(double withdraw) {
            this->withdraw = withdraw;
        }

        double calculateFinalBalance() {

            if (this->balance > this->withdraw){
                this->balance -= this->withdraw;
                return balance;
            }

            else {
                cout << "Invalid input. Withdrawal amount can not exceed balance amount\n";
            }
        }


    // GETTER FUNCTIONS
        string getAccountNumber() {
            return accountNumber;
        }

        string getStudentName() {
            return studentName;
        }

        string getUniversityID() {
            return universityID;
        }

        double getBalance() {
            return balance;
        }

        double getWithdraw() {
            return withdraw;
        }

};