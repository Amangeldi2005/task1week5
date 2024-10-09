#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;
    int portions = (n + k - 1) / k;
    int total_time = portions * 2 * m;

    cout << total_time << endl;

    return 0;
}
