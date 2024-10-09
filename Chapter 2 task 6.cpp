#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int price_total = a * 100 + b;
    int paid_total = c * 100 + d;

    int change_total = paid_total - price_total;

    int e = change_total / 100;
    int f = change_total % 100;

    cout << e << " " << f << endl;

    return 0;
}
