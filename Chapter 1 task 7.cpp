#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int days = (m + n - 1) / n;


    std::cout << days << std::endl;

    return 0;
}
