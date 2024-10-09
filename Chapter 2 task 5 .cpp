#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    string numerals[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";

    for (int i = 0; i < 9; ++i) {
        while (X >= values[i]) {
            result += numerals[i];
            X -= values[i];
        }
    }

    cout << result << endl;

    return 0;
}

