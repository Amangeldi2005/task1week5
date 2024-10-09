#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long sum = 0;

    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;
        sum += number;
    }


    cout << sum << endl;

    return 0;
}
