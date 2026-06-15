#include "header.h"

int main() {

    StockEx market1, market2;

    cout << "Enter details for first market:\n";
    cin >> market1;

    if (market1.getMarketRate() <= 0){
        cout << "Invalid input for market rate! Setting to zero.\n";
        market1.setMarketRate(0);
    }

    cout << "\nEnter details for second market:\n";
    cin >> market2;

    if (market2.getMarketRate() <= 0){
        cout << "Invalid input for market rate! Setting to zero.\n";
        market2.setMarketRate(0);    
    }

    cout << "\nFirst Market:\n";
    cout << market1;

    cout << "\nSecond Market:\n";
    cout << market2;

    int choice;
    float amount;

    cout << "\nChoose market for currency exchange:\n";
    cout << "1. First Market\n";
    cout << "2. Second Market\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount to exchange: ";
    cin >> amount;

    if (choice == 1)
        cout << "Converted amount: " << market1 * amount << endl;
    else if (choice == 2)
        cout << "Converted amount: " << market2 * amount << endl;
    else
        cout << "Invalid choice!" << endl;

    cout << "\nDifference between market rates: "
         << market1 - market2 << endl;

    if (market1 > market2)
        cout << "First market rate is higher." << endl;
    else
        cout << "Second market rate is higher." << endl;

    return 0;
}