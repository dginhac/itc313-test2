#include <iostream>
#include "date.h"

int main (int argc, char *argv[]) {
    Date today(10,11);
    Date tomorrow(10,12);
    std::cout << "Today is " << today.month() << "/" << today.day() << std::endl;
    std::cout << "Tomorrow is " << tomorrow.month() << "/" << tomorrow.day() << std::endl;
    return 0;
}
