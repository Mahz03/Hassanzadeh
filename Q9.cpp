#include <iostream>
#include <string>
using namespace std;

struct Email {
    string address;
    bool isValid;
};

bool validateEmail(string email)
}
int main() {
    Email userEmail;

    cout << "Enter your email address: ";
    cin >> userEmail.address;

    userEmail.isValid = validateEmail(userEmail.address);

    if (userEmail.isValid) {
        cout << "Email is valid." << endl;
    } else {
        cout << "Invalid email address." << endl;
    }

    return 0;
}
