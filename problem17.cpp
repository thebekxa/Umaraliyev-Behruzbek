#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int code = (num > 0) ? 1 : (num < 0 ? -1 : 0);

    switch (code) {
        case 1:
            cout << num << " is Positive." << endl;
            break;
        case -1:
            cout << num << " is Negative." << endl;
            break;
        case 0:
            cout << "The number is Zero." << endl;
            break;
        default:
            cout << "Unexpected case!" << endl;
    }

    return 0;
}
