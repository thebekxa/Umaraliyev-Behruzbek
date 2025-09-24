#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Please enter first angle: ";
    cin >> a;
    cout << "Please enter second angle: ";
    cin >> b;
    cout << "Please enter third angle: ";
    cin >> c;
    int sum = a + b + c;
    if (sum <= 180 && a>0 && b>0 && c>0) {
        cout << "the triangle is valid" << endl;
    }
    else
        cout << "the triangle is not invalid" << endl;
    return 0;
}
