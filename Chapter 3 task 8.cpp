#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int countZeros = 0;
    int countPositives = 0;
    int countNegatives = 0;


    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;
        if (number == 0) {
            countZeros++;
        } else if (number > 0) {
            countPositives++;
        } else {
            countNegatives++;
        }
    }


    cout << countZeros << " " << countPositives << " " << countNegatives << endl;

    return 0;
}
