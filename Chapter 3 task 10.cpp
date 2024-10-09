#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int countSolutions = 0;

    for (int x = 0; x <= 1000; ++x) {
        if (x == e) {
            continue;
        }

        int result = a * x * x * x + b * x * x + c * x + d;

        if (result == 0) {
            countSolutions++;
        }
    }

    cout << countSolutions << endl;

    return 0;
}

