#include <iostream>
#include <string>
using namespace std;

class Book{

    private:

        int bookID;
        string author;
        string title;
        double price;

    public:

        Book() : bookID(0), author("Unknown"), title("unknown"), price(0.0) {}

        Book(int id, string auth, string titl, double pric) : bookID(id), author(auth), title(titl) {
            if (pric > 0) price = pric;
            else price = 0;
        }

        Book(const Book &copy){
            bookID = copy.bookID;
            author = copy.author;
            title = copy.title;
            price = copy.price;
        }

        ~Book() {
            cout << "The book is deleted\n";
        }

        void setPrice(double price) {
            this->price = price;
        }

        double getPrice(){
            return price;
        }

        void display(){
            cout << "ID: " << bookID << '\n';
            cout << "Title: " << title << '\n';
            cout << "Author: " << author << '\n';
            cout << "Price: $" << getPrice() << '\n';
        }
};