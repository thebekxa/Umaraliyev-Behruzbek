#include <chrono>
#include <iostream>
using namespace std;

int main() {
    int today, futureDAY;
    cout << "Enter today:" ;
    cin >> today;
    cout << "Enter future DAY:" ;
    cin >> futureDAY;
    int futureToday = (futureDAY + today)% 7 ;
    cout << "Today is";
    switch (today) {
        case 0: cout << "Sunday" ; break;
        case 1: cout << "Monday" ; break;
        case 2: cout << "Tuesday" ; break;
        case 3: cout << "Wednesday" ; break;
        case 4: cout << "Thursday" ; break;
        case 5: cout << "Friday" ; break;
        case 6: cout << "Saturday" ; break;
    }
    cout << "and the future day is " ;
    switch (futureToday) {
        case 0: cout << "Sunday" ; break;
        case 1: cout << "Monday" ; break;
        case 2: cout << "Tuesday" ; break;
        case 3: cout << "Wednesday" ; break;
        case 4: cout << "Thursday" ; break;
        case 5: cout << "Friday" ; break;
        case 6: cout << "Saturday" ; break;
    }
    return 0;
    }


