#include <iostream>
using namespace std;
int main() {
    int weight;
    cout << "Please enter your weight in kg: ";
    cin >> weight;
    if (0 < weight && weight <= 1) {
        cout << "3500";
    }
    else if (weight > 1 && weight <= 3) {
        cout << "5500";
    }
    else if (weight > 3 && weight <= 10) {
        cout << "8500";
    }
    else if (weight > 10 && weight <= 20) {
        cout << "10500";
    }
    else if (weight <=0) {
        cout << "Invalid input";
    }
    else if (weight > 20) {
        cout << "The package can not be delivered";
    }
    else

    return 0;
}
