#include <iostream>
#include <string>
using namespace std;
class Dog {
private:
    string name;
    int birthYear;
    int age;
    int score;

public:
    Dog(string n, int by) : name(n), birthYear(by), age(2024 - by), score(0) {}

    void bark() {
        cout << name << " is barking!" << endl;
    }

    void learn(int points) {
        score += points;
        cout << name << " has earned " << points << " points. Total score: " << score << endl;
    }

};

int main() {
    string dogName;
    int birthYear;

    cout << "Enter the dog's name: ";
    cin >> dogName;

    cout << "Enter the dog's birth year: ";
    cin >> birthYear;

    Dog myDog(dogName, birthYear);

    int command, points;

    do {
        cout << "Enter a command (1 - bark, 2 - learn, 0 - exit): ";
        cin >> command;

        switch (command) {
            case 1:
                myDog.bark();
                break;
            case 2:
                cout << "Enter the number of points to learn: ";
                cin >> points;
                myDog.learn(points);
                break;
            default:
                break;
        }

    } while (command != 0);

    return 0;
}
