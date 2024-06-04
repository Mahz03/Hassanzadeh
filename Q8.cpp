#include <iostream>
#include <string>
using namespace std;

struct MobileNumber {
    string number;
};

bool validateMobileNumber(MobileNumber mobile) {
    if (mobile.number.length() == 11) {
        for (char c : mobile.number) {
            if (!isdigit(c)) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    MobileNumber mobile;

    cout << "Enter a mobile number: ";
    cin >> mobile.number;

    if (validateMobileNumber(mobile)) {
        cout << "Valid mobile number." << endl;
    } else {
        cout << "Invalid mobile number." << endl;
    }

    return 0;
}
