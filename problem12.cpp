#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    int firstDigit = num / 100;        // hundreds place
    int lastDigit = num % 10;          // ones place
    if (firstDigit == lastDigit)
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    return 0;
}
