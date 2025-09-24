#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Please enter the speed: ";
    cin>>a;
    if (a<20) {
        cout << "The speed is too slow" << endl;
    }
     else if (a>80) {
        cout << "The speed is too fast" << endl;
    }
    else {
        cout << "The speed is just right" << endl;
    }
    return 0;


}
