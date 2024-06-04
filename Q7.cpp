#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    int length = password.length();
    int score = 0;

    if (length >= 6) score += 20;

    for (char c : password) {
        if (isdigit(c)) {
            score += 20;
            break;
        }
    }

    for (char c : password) {
        if (!isalnum(c)) {
            score += 20;
            break;
        }
    }

    for (char c : password) {
        if (isupper(c)) {
            score += 20;
            break;
        }
    }

    for (char c : password) {
        if (islower(c)) {
            score += 20;
            break;
        }
    }

    cout << "Password strength: " << score << "%" << endl;

    return 0;
}
