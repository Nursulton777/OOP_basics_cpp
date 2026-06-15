#include "header.h"

int main(){
    Book book1(101, "James Clear", "Atomic Habits", -49.99);
    Book book2(127, "Thomas Shelby", "Bastards", 69.49);
    Book book3;


    book2.setPrice(67.69);

    book3.setPrice(34.55);

    cout << "- - - Display Books - - -\n";

    cout << "Book Details:\n";

    book1.display();
    cout << '\n';


    cout << "Book Details:\n";

    book2.display();
    cout << '\n';


    cout << "Book Details:\n";

    book3.display();
    cout << '\n';


    return 0;
}