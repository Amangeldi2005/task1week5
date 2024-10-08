#include <iostream>

int main() {
    int a, b, n;
    std::cin >> a >> b >> n;


    int price_in_kopecks = a * 100 + b;


    int total_in_kopecks = price_in_kopecks * n;


    int total_rubles = total_in_kopecks / 100;
    int total_kopecks = total_in_kopecks % 100;

    std::cout << total_rubles << " " << total_kopecks << std::endl;

    return 0;
}
