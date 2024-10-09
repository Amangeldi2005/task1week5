#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int countZeros = 0;


    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;
        if (number == 0) {
            countZeros++;
        }
    }


    cout << countZeros << endl;

    return 0;
}
