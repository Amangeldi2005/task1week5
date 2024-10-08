#include <iostream>

int main() {
    int lesson_number;
    std::cin >> lesson_number;


    const int lesson_duration = 45;
    const int break_short = 5;
    const int break_long = 15;


    int total_lesson_time = lesson_number * lesson_duration;


    int total_break_time = (lesson_number - 1) / 2 * break_short + (lesson_number / 2) * break_long;


    int total_time = total_lesson_time + total_break_time;


    int end_time = 540 + total_time;


    int hours = end_time / 60;
    int minutes = end_time % 60;

    std::cout << hours << " " << minutes << std::endl;

    return 0;
}
