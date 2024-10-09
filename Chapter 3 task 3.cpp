#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;


    int start = ceil(sqrt(a));


    for (int i = start; i * i <= b; ++i) {
        int square = i * i;
        if (square >= a && square <= b) {
            cout << square << " ";
        }
    }

    cout << endl;
    return 0;
}
