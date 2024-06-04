#include <iostream>
using namespace std;

struct Food {
    int code;
    string name;
    float price;
};

const float VAT = 0.09;

int main() {
    Food foods[] = {{1, "Pizza", 10.99}, {2, "Burger", 5.99}, {3, "Salad", 4.99}};
    Food drinks[] = {{1, "Cola", 1.99}, {2, "Coffee", 2.49}, {3, "Tea", 1.49}};
    Food appetizers[] = {{1, "Fries", 3.49}, {2, "Wings", 4.99}, {3, "Nachos", 5.49}};

    int foodCode, drinkCode, appetizerCode;
    cout << "Enter food code: ";
    cin >> foodCode;
    cout << "Enter drink code: ";
    cin >> drinkCode;
    cout << "Enter appetizer code: ";
    cin >> appetizerCode;

    float total = foods[foodCode - 1].price + drinks[drinkCode - 1].price + appetizers[appetizerCode - 1].price;

    float finalAmount = total + total * VAT;

    cout << "Final amount: $" << finalAmount << endl;

    return 0;
}
