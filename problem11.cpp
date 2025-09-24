#include <iostream>
using namespace std;
int main() {
    double w1, p1, w2, p2, opr1, opr2;
    cout << "Enter weight and price for package 1: ";
    cin >> w1 >> p1;
    cout << "Enter weight and price for package 2: ";
    cin >> w2 >> p2;
    opr1=w1*p1;
    opr2=w2*p2;
    if (opr1>opr2) {
        cout << opr1<< " is better than " << opr2 << endl;
    }

    return 0;
}
