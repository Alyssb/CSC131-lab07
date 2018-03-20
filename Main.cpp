#include <cstdlib>
#include <iostream>
#include "Functions.h"

int bar(int);

int main(int argc, char** argv) {
    bar(4);
    std::cout << "Hi there!" << std::endl;
    greeting();
    std::cout << "bar(5) = " << bar(5) << std::endl;
    return EXIT_SUCCESS;
}
