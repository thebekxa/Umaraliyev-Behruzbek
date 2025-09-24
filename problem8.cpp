#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "enter a character: ";
    cin>> a;
    if (int(a) >= 65 && int(a) <= 90) {
        cout << "uppercase alphabet" << endl;
    }
    else if (int(a) >= 97 && int(a) <=120) {
        cout << "it is not a alphabet" << endl;
    }
}
