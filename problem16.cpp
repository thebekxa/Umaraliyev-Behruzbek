#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter the score of the student: ";
    cin >> grade;
    switch (grade /10) {
        case 10: // grade = 100
        case 9:  // 90–99
            cout << "Grade: A, excellent job" << endl;
            break;
        case 8:  // 80–89
            cout << "Grade: B, almost perfect" << endl;
            break;
        case 7:  // 70–79
            cout << "Grade: C, a little closer" << endl;
            break;
        case 6:  // 60–69
            cout << "Grade: D, start locking on studies" << endl;
            break;
        case 5:  // 50–59
        case 4:  // 40–49
        case 3:  // 30–39
        case 2:  // 20–29
        case 1:  // 10–19
        case 0:  // 0–9
            cout << "Grade: F" << endl;
            break;
        default:
            cout << "Invalid grade! Must be 0–100." << endl;
    }

    return 0;
}
