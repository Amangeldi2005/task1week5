#include <iostream>

int main() {
    int h, a, b;
    std::cin >> h >> a >> b;


    int days = (h - a + (a - b) - 1) / (a - b);


    int total_days = days + 1;


    std::cout << total_days << std::endl;

    return 0;
}
