#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "Enter a character: ";
    cin >> a;
    switch (a) {
        case 'u':
            cout << "Assalomu alaykum" << endl;
            break;
        case 'e':
            cout << "Hello" << endl;
            break;
        case 'r':
            cout << "Привет!" << endl;
            break;
        case 'g':
            cout << "Halo!" << endl;
            break;
        default:
            cout << "Error!" << endl;
    }
    return 0;
}
