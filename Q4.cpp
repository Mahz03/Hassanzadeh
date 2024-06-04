#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int distance;

    void drive(int km) {
        distance += km;
    }

    void showData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Distance driven: " << distance << "km" << endl;
    }
};

int main() {
    Car myCar;

    cout << "Enter the brand of the car: ";
    cin >> myCar.brand;

    cout << "Enter the model of the car: ";
    cin >> myCar.model;

    cout << "Enter the initial distance driven by the car: ";
    cin >> myCar.distance;

    int additionalDistance;

    cout << "Enter the additional distance to be driven by the car: ";
    cin >> additionalDistance;

    myCar.drive(additionalDistance);

    myCar.showData();

    return 0;
}
