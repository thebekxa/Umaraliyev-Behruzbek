#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter month number: ";
    cin >> a;
    switch (a) {
        case 1:
            cout << "January 1st, New Year's Day" << endl;
            break;
        case 2:
            cout << "No public holidays in February" << endl;
            break;
        case 3:
            cout << "March 21 - Navruz" << endl;
            break;
        case 4:
            cout << "No public holidays in April" << endl;
            break;
        case 5:
            cout << "May 9 - Day of Remembrance and Honor" << endl;
            break;
        case 6:
            cout << "June 30, Youth Day" << endl;
            break;
        case 7:
            cout << "No public holidays in July" << endl;
            break;
        case 8:
            cout << "August 31 - Remembrance day for Victims of Political Repressions" << endl;
            break;
        case 9:
            cout << " September 1 - Independence Day" << endl;
            break;
        case 10:
            cout << "October 1 - Teacher's Day" << endl;
            break;
        case 11:
            cout << "November 18 Flag Day" << endl;
            break;
        case 12:
            cout << "December 8 - Constitution Day" << endl;
        default:
            cout << "Invalid month" << endl;
    }
    return 0;
}
