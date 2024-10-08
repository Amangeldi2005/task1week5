#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int last_digit = number % 10;         //
    int middle_digit = (number / 10) % 10; //
    int first_digit = number / 100;       //

    int sum = first_digit + middle_digit + last_digit;

    std::cout << sum << std::endl;

    return 0;
}
