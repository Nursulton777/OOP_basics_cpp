#include <iostream>
#include <string>
using namespace std;

class StockEx {
private:
    string currency;
    float mktrate;
    string date;

public:
    // Parameterized constructor
    StockEx(string c = "", float r = 0, string d = "") {
        currency = c;
        mktrate = r;
        date = d;
    }

    //setter function for market rate
    void setMarketRate(float m) {
        mktrate = m;
    }

    //getter function
    float getMarketRate() {
        return mktrate;
    }

    // Multiplication operator
    float operator*(float amount) {
        return amount * mktrate;
    }

    // Subtraction operator
    float operator-(const StockEx& other) {
        return mktrate - other.mktrate;
    }

    // Greater-than operator
    bool operator>(const StockEx& other) {
        return mktrate > other.mktrate;
    }

    // Stream insertion operator
    friend ostream& operator<<(ostream& out, const StockEx& obj);

    // Stream extraction operator
    friend istream& operator>>(istream& in, StockEx& obj);
};

// Output operator
ostream& operator<<(ostream& out, const StockEx& obj) {
    out << "Currency: " << obj.currency << endl;
    out << "Market Rate: " << obj.mktrate << endl;
    out << "Date: " << obj.date << endl;

    return out;
}

// Input operator
istream& operator>>(istream& in, StockEx& obj) {
    cout << "Enter currency: ";
    in >> obj.currency;

    cout << "Enter market rate: ";
    in >> obj.mktrate;

    cout << "Enter date: ";
    in >> obj.date;

    return in;
}