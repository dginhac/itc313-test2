#include <iostream>
#include "date.h"

int main (int argc, char *argv[]) {
    Date today(10,11);
    Date tomorrow(10,12);
    std::cout << "Today is " << today.month() << "/" << today.day() << std::endl;
    std::cout << "Tomorrow is " << tomorrow.month() << "/" << tomorrow.day() << std::endl;
    Date a_day(15, 15);
    std::cout << "A day is " << a_day.month() << "/" << a_day.day() << std::endl;

    return 0;
}
