#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout << "Enter a point (x y): ";
    cin >> x >> y;
    int distance = sqrt(x * x + y * y);
    if (distance <= 10)
        cout << "The point (" << x << ", " << y << ") is inside the circle." << endl;
    else
        cout << "The point (" << x << ", " << y << ") is outside the circle." << endl;

    return 0;
}
