#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    bool found = false;


    for (int x = 0; x <= 1000; ++x) {

        int result = a * x * x * x + b * x * x + c * x + d;


        if (result == 0) {
            cout << x << " ";
            found = true;
        }
    }

    if (found) {
        cout << endl;
    }

    return 0;
}
