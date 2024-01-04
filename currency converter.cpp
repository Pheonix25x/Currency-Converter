#include <iostream>
#include <string>
using namespace std;

int main() {
    double dollar;
    string currency;

    cout << "CURRENCY CONVERTER\n";
    cout << "Enter the American Dollars you want to convert:\n";
    cin >> dollar;

    double pound = dollar * 0.78;   // Convert to pound
    double euro = dollar * 0.91;   // Convert to euro
    double rupee = dollar * 84;     // Convert to rupee     
    double riyal = dollar * 3.75;  // Convert to Riyal

    cout << "Enter INR for converting USD to INR, GBP for USD to GBP, EUR for USD to EUR, or SAR for USD to SAR:\n";  
    cin >> currency;

    if (currency == "INR") {
        cout << dollar << " Dollars In Rupees = " << rupee;
    }
    else if (currency == "EUR") {
        cout << dollar << " Dollars In Euro = " << euro;
    }
    else if (currency == "GBP") {
        cout << dollar << " Dollars in Pounds = " << pound;
    }
    else if (currency == "SAR") { 
        cout << dollar << " Dollars in Riyal = " << riyal;
    }
    else {
        cout << "That's An Invalid Input! Please Try Again.";
    }

    return 0;  
}
