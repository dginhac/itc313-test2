#include <iostream>
#include "date.h"

int main (int argc, char *argv[]) {
    Date today(10,11);
    Date tomorrow(10,12);
    std::cout << "Today is " << today.month() << "/" << today.day() << std::endl;
    std::cout << "Tomorrow is " << tomorrow.month() << "/" << tomorrow.day() << std::endl;
    std::cout << "truc qui sert a rien" << std::endl;
    std::cout << "truc qui sert a rien - 2eme fois" << std::endl;

    return 0;
}
