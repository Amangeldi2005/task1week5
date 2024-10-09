#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sides[3] = {a, b, c};
    sort(sides, sides + 3);

    a = sides[0];
    b = sides[1];
    c = sides[2];

    if (a + b <= c) {
        cout << "impossible" << endl;
    } else {

        if (a * a + b * b == c * c) {
            cout << "right" << endl;
        } else if (a * a + b * b > c * c) {
            cout << "acute" << endl;
        } else {
            cout << "obtuse" << endl;
        }
    }

    return 0;
}
