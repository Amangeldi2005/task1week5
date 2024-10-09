#include <iostream>
using namespace std;

int main() {
    int q_row, q_col, f_row, f_col;
    cin >> q_row >> q_col >> f_row >> f_col;

    if (q_row == f_row ||
        q_col == f_col ||
        abs(q_row - f_row) == abs(q_col - f_col)) {
        cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    return 0;
}
