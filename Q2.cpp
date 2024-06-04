#include <iostream>
#include <string>

using namespace std;

bool isValidCardNumber(string cardNumber) {
    if (cardNumber.length() != 16)
        return false;

    for (char c : cardNumber) {
        if (!isdigit(c))
            return false;
    }

    return true;
}

string getBankName(string cardNumber) {
    string bankName = "UNKNOWN";

    if (cardNumber.substr(0, 4) == "6037")
        bankName = "MELI";
    // Add more bank codes here

    return bankName;
}

int main() {
    string cardNumber;

    cout << "Enter a 16-digit card number: ";
    cin >> cardNumber;

    if (!isValidCardNumber(cardNumber)) {
        cout << "Invalid card number!" << endl;
        return 1;
    }

    string bankName = getBankName(cardNumber);

    cout << "CARD:" << cardNumber.substr(0, 4) << "-" << cardNumber.substr(4, 4) << "-"
         << cardNumber.substr(8, 4) << "-" << cardNumber.substr(12, 4)
         << ".BANK:" << bankName << endl;

    return 0;
}
